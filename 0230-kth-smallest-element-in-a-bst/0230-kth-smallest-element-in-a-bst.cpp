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
    private:
    int sm = INT_MAX;
    int k = 0;
    void solve(TreeNode* root,int kth){
        if(!root) return;
        solve(root->left,kth);
        k++;
        if(k == kth){
            sm = root->val;
            
        }
        solve(root->right,kth);
    }
public:
    int kthSmallest(TreeNode* root, int kth) {
        sm = 0;
        k = 0;
        solve(root,kth);
        return sm;
    }
};