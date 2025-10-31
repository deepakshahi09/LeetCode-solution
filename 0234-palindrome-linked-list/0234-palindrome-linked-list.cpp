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
    // bool isPalindrome(ListNode* head) {
        // ListNode*slow = head;
        // ListNode* fast = head;
        // while(fast->next && fast->next->next){
        //     fast = fast->next->next;
        //     slow = slow->next;
        // }
        // ListNode* prev = NULL;
        // ListNode* next = NULL;
        // ListNode* curr = slow->next;

        // while(curr){
        //     next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = next;
        // }
        // ListNode* right = prev;
        // ListNode* left = head;

        // while(right){
        //     if(right->val != left->val){
        //         return false;
        //     }
        //     right = right->next;
        //     left = left->next;
        // }
        // return true;

        




        // using STACK

         //bool isPalindrome(ListNode* head) {
        // stack<int>st;
        // ListNode* temp = head;
        // while(temp){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // while(temp){
        //     int val = st.top();
        //     st.pop();
        //     if(val != temp->val){
        //         return false;
        //     }
        //     temp = temp->next;
        // }
        // return true;


        //      Using Recursion

        ListNode* left;
        bool helper(ListNode* right){
            if(right == NULL){
                return true;
            }
            bool ispal = helper(right->next);
            if(!ispal){
                return false;
            }
            if(left->val != right->val){
                return false;
            }
            left = left->next;
            return true;
        }
        bool isPalindrome(ListNode* head) {
            left = head;
            return helper(head);
        
        
    }
};