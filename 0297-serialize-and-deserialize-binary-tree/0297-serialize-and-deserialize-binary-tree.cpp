/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root){
            return "#";
        }
        return to_string(root->val)+","+serialize(root->left)+","+serialize(root->right);
        
    }
    TreeNode* solve(queue<string>&q){
        string front = q.front();
        q.pop();

        if(front == "#"){
            return NULL;
        }
        TreeNode* root = new TreeNode(stoi(front));

        root->left = solve(q);
        root->right = solve(q);
        return root;

    }
    
    
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string value;
        queue<string>q;
        
        while(getline(ss,value,',')){
            q.push(value);
        }
        return solve(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));