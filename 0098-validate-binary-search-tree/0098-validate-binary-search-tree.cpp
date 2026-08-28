class Solution {
private:
    bool solve(TreeNode* root, long long min, long long max) {
        if (!root) {
            return true;
        }
        if (root->val <= min || root->val >= max) {
            return false;
        }

        return solve(root->left, min, root->val) &&
               solve(root->right, root->val, max);
    }

public:
    bool isValidBST(TreeNode* root) {
        return solve(root, LLONG_MIN, LLONG_MAX);
    }
};