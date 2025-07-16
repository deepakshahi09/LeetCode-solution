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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>lav;
            for(int i=0;i<n;i++){
                TreeNode* nod = q.front();
                q.pop();
                lav.push_back(nod->val);
                if(nod->left){
                    q.push(nod->left);
                }
                if(nod->right){
                    q.push(nod->right);
                }
            }
            ans.push_back(lav);
        }
        return ans;
        
    }
};