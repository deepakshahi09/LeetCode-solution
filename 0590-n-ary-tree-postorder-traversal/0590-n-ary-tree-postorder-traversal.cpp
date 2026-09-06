/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(!root){
            return {};
        }
        stack<Node*>st;
        vector<int>ans;
        st.push(root);
        while(!st.empty()){
            Node* curr = st.top();
            ans.push_back(curr->val);
            st.pop();
            for(Node* nei : curr->children){
                st.push(nei);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};