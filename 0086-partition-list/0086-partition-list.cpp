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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr = head;
        ListNode* big = new ListNode(-1);
        ListNode* b = big;
        ListNode* small = new ListNode(-1);
        ListNode* sm = small;

        while(curr){
            if(curr->val < x){
                sm->next = new ListNode(curr->val);
                sm = sm->next;
            }
            else if(curr->val >= x){
                b->next = new ListNode(curr->val);
                b = b->next;
            }
            curr = curr->next;
        }
        sm->next = big->next;
        b->next = NULL;
        return small->next;

        
    }
};