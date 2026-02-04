/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head){
            return head;
        }
        Node* curr = head;
        while(curr){
            if(curr->child){
                Node* nextNode = curr->next;
                Node* childhead = flatten(curr->child);

                curr->next = childhead;
                childhead->prev = curr;
                curr->child = NULL;

                Node* temp = childhead;
                while(temp->next){
                    temp = temp->next;
                }

                if(nextNode){
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};