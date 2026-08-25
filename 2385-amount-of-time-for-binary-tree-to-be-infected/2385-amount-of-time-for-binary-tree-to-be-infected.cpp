class Solution {
private:

    void mrkparent(TreeNode* root,
                   unordered_map<TreeNode*, TreeNode*>& parent) {

        if (!root) {
            return;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            if (node->left) {
                q.push(node->left);
                parent[node->left] = node;
            }

            if (node->right) {
                q.push(node->right);
                parent[node->right] = node;
            }
        }
    }

    void solve(TreeNode* root,
               int target,
               TreeNode*& ntarget) {

        if (!root || ntarget != NULL) {
            return;
        }

        if (root->val == target) {
            ntarget = root;
            return;
        }

        solve(root->left, target, ntarget);
        solve(root->right, target, ntarget);
    }

public:

    int amountOfTime(TreeNode* root, int start) {

        unordered_map<TreeNode*, TreeNode*> parent;
        unordered_set<TreeNode*> visit;

        // Find target node
        TreeNode* ntarget = NULL;
        solve(root, start, ntarget);

        // Create parent mapping
        mrkparent(root, parent);

        queue<TreeNode*> q;
        q.push(ntarget);
        visit.insert(ntarget);

        int c = 0;

        while (!q.empty()) {

            int n = q.size();

            for (int i = 0; i < n; i++) {

                TreeNode* node = q.front();
                q.pop();

                // Left
                if (node->left &&
                    !visit.count(node->left)) {

                    visit.insert(node->left);
                    q.push(node->left);
                }

                // Right
                if (node->right &&
                    !visit.count(node->right)) {

                    visit.insert(node->right);
                    q.push(node->right);
                }

                // Parent
                if (parent.count(node) &&
                    !visit.count(parent[node])) {

                    visit.insert(parent[node]);
                    q.push(parent[node]);
                }
            }

            c++;
        }

        return c - 1;
    }
};