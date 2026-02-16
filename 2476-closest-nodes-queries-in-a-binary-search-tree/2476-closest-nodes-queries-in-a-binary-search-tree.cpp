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
    void solve(TreeNode* root,vector<int>&v){
        if(!root){
            return;
        }
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int>arr;
        solve(root,arr);
        vector<vector<int>>ans;

        for(int i : queries){
            int mini = -1;
            int maxi = -1;
            //lower_bound finds first element >= q
            int idx = lower_bound(arr.begin(), arr.end(), i) - arr.begin();
            if(idx < arr.size()){
                maxi = arr[idx];
            }
            if(idx < arr.size() && arr[idx] == i){
                mini = arr[idx];
            }
            else{
                if(idx > 0){
                    mini = arr[idx-1];
                }
            }
            ans.push_back({mini,maxi});
        }
        return ans;
    }
};