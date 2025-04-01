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
    int sum(TreeNode* node,int currsum){
        if(node==NULL){
            return 0;
        }
        currsum = currsum * 10 + node->val;
        if(node->left == NULL && node->right == NULL){
            return currsum;
        }
        return sum(node->left,currsum) + sum(node->right,currsum);

    }
public:
    int sumNumbers(TreeNode* root) {
        return sum(root,0);
        
    }
};