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
    int i = 0;
    TreeNode* bst(vector<int>&preorder, int mini, int maxi){
        if(i == preorder.size()){
            return nullptr;
        }
        int val = preorder[i];
        if(val < mini || val > maxi){
            return nullptr;
        }
        i++;
        TreeNode* root = new TreeNode(val);
        root->left = bst(preorder,mini,val);
        root->right = bst(preorder,val,maxi);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bst(preorder,INT_MIN,INT_MAX);
        
    }
};