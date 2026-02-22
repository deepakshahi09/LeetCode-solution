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
    void reorderList(ListNode* head) {
        if(!head || !head->next){
            return;
        }
        stack<ListNode*>st;
        ListNode* temp = head;
        while(temp){
            st.push(temp);
            temp = temp->next;
        }
        int n = st.size();
        temp = head;
        for(int i=0;i<n/2;i++){
            ListNode* nextNode = temp->next;   // store next
            ListNode* lastNode = st.top();
            st.pop();

            temp->next = lastNode;
            lastNode->next = nextNode;

            temp = nextNode;
        }
        temp->next = NULL;

    }
};