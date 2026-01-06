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
    int maxLevelSum(TreeNode* root) {
        int ans = INT_MIN;
        int lavel =0;
        int anslav = 0;

        if(root == NULL){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int sum  = 0;
            for(int i=0;i<n;i++){
                TreeNode* front = q.front();
                q.pop();
                sum += front->val;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            lavel++;
            if(sum > ans){
                ans = sum;
                anslav = lavel;
            }

        }
        return anslav;
        
    }
};