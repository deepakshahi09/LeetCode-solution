class Solution {
public:
    ListNode* rev(ListNode* h1){
        ListNode* curr = h1;
        ListNode* prev = NULL;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l11, ListNode* l22) {
        ListNode* l1 = rev(l11);
        ListNode* l2 = rev(l22);

        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        int carry = 0;

        while(l1 || l2){
            int sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            ans->next = new ListNode(sum % 10);
            ans = ans->next;
        }

        if(carry > 0){  // ⚡ fix: handle leftover carry
            ans->next = new ListNode(carry);
        }

        return rev(dummy->next);
    }
};
