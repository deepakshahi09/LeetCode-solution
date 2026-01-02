class Solution {
public:
    long long sec = LLONG_MAX;

    void dfs(TreeNode* root, int minval) {
        if (root == NULL) return;

        if (root->val > minval && root->val < sec) {
            sec = root->val;
        }

        dfs(root->left, minval);
        dfs(root->right, minval);
    }

    int findSecondMinimumValue(TreeNode* root) {
        if (root == NULL) return -1;

        dfs(root, root->val);

        return (sec == LLONG_MAX) ? -1 : sec;
    }
};
