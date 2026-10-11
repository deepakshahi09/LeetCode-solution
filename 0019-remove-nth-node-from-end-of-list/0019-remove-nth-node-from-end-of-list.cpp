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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(n>0){
            n--;
            fast = fast->next;
        }
        ListNode* prev = NULL;
        while(fast){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        if(prev==NULL){
            head = slow->next;
            delete slow;
        }
        else{
            prev->next = slow->next;
            delete slow;
        }
        return head;

    }
};