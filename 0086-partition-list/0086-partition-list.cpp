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
        ListNode* sm = new ListNode(-1);
        ListNode* s = sm;
        ListNode* big = new ListNode(-1);
        ListNode* b = big;
        ListNode* curr = head;
        while(curr){
            if(curr->val < x){
                s->next = new ListNode(curr->val);
                s = s->next;
            }
            else{
                b->next = new ListNode(curr->val);
                b = b->next;
            }
            curr = curr->next;
        }
        s->next = big->next;
        b->next = nullptr;
        return sm->next;


    }
};