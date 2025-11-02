/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* dummy = new ListNode(-1);
//         ListNode* temp = dummy;

//         int carry = 0;
//         while(l1 || l2 || carry){
//             int sum = carry;
//             if(l1){
//                 sum+=l1->val;
//                 l1 = l1->next;
//             }
//             if(l2){
//                 sum+=l2->val;
//                 l2 = l2->next;
//             }
//             carry = sum/10;
//             temp->next = new ListNode(sum % 10);
//             temp = temp->next;
//         }
//         return dummy->next;
        
//     }
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        // Base case: if both lists are empty and no carry, stop recursion
        if (!l1 && !l2 && carry == 0)
            return nullptr;

        // Calculate current sum
        int sum = carry;
        if (l1) sum += l1->val;
        if (l2) sum += l2->val;

        // Create node for current digit
        ListNode* node = new ListNode(sum % 10);

        // Recursive call for next nodes
        node->next = addTwoNumbers(
            l1 ? l1->next : nullptr,
            l2 ? l2->next : nullptr,
            sum / 10
        );

        return node;
    }
};