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
    void swp(int &a ,int &b){
        int c = a;
        a = b;
        b = c;
    }
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return NULL;
        }
        ListNode* first = head;
        ListNode* second =head->next;
        while(first && second){
            swp(first->val , second->val);
            first = second->next;
            if(first){
                second = first->next;
            }
        }
        return head;
    }
};