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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prevA = list1;
        // Step 1: find node before 'a'
        for(int i = 0; i < a-1; i++) {
            prevA = prevA->next;
        }
        
        ListNode* afterB = prevA;
        // Step 2: find node after 'b'
        for(int i = 0; i <= (b - a + 1); i++) {
            afterB = afterB->next;
        }
        
        // Step 3: connect prevA to head of list2
        prevA->next = list2;
        
        // Step 4: traverse to end of list2
        ListNode* tail2 = list2;
        while(tail2->next != nullptr) {
            tail2 = tail2->next;
        }
        
        // Step 5: connect tail of list2 to afterB
        tail2->next = afterB;
        
        return list1;
    }
};
