/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    private:
    void mrkparent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* top = q.front();
            q.pop();
            if(top->left){
                q.push(top->left);
                parent[top->left] = top;
            }
            if(top->right){
                q.push(top->right);
                parent[top->right] = top;
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        mrkparent(root,parent);
        queue<TreeNode*>q;
        unordered_set<TreeNode*>visit;
        int dist = 0;
        vector<int>ans;
        q.push(target);
        visit.insert(target);
        while(!q.empty()){
            if(dist == k){
                while(!q.empty()){
                    ans.push_back(q.front()->val);
                    q.pop();
                }
                return ans;
            }
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->left && !visit.count(node->left)){
                    visit.insert(node->left);
                    q.push(node->left);
                }
                if(node->right && !visit.count(node->right)){
                    visit.insert(node->right);
                    q.push(node->right);
                }

                if(parent.count(node) && !visit.count(parent[node])){
                    visit.insert(parent[node]);
                    q.push(parent[node]);
                }
            }
            dist++;
        }
        return ans;
    }
};