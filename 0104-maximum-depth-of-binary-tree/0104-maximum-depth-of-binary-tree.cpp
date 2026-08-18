/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root){
            return 0;
        }
        q.push(root);
        int c = 0;
        while(!q.empty()){
            int n = q.size();
            c++;
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return c;
        
    }
};


// class Solution {
//     private:
//     int ans = INT_MIN;
//     int height(TreeNode* root){
//         if(!root){
//             return 0;
//         }
//         int left = height(root->left);
//         int right = height(root->right);
//         ans = max(ans,max(left,right));
//         return 1+max(left,right);
//     }
// public:
//     int maxDepth(TreeNode* root) {
//         return height(root);

//     }
// };