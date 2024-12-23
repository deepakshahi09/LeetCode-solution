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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return ismirror(root->left,root->right);
        
    }
    private:
    bool ismirror(TreeNode* right,TreeNode* left){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left == NULL || right == NULL){
            return false;
        }
        return (left->val == right->val) && ismirror(left->left,right->right) && ismirror(left->right,right->left);
    }
};