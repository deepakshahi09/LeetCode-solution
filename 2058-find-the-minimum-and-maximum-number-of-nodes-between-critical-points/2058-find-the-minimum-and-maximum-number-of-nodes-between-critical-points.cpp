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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1;
        int prev = -1;
        int idx = 1;
        int mindif = INT_MAX;

        ListNode* left = head;
        ListNode* curr = head->next;
        ListNode* right = head->next->next;

        while(right != NULL){
            int val =  curr->val;
            int back = left->val;
            int next = right->val;

            if(val < back && val < next || val > back && val > next){

                    if(first == -1){
                        first = idx;
                    }
                    else{
                        mindif = min(mindif,idx-prev);
                    }
                    prev = idx;
            }
            idx++;
            left = curr;
            curr = right;
            right = right->next;
        }
        if(first == -1 || prev == first){
            return {-1,-1};
        }
        int mxdis = prev-first;
        return {mindif,mxdis};
        

    }
};