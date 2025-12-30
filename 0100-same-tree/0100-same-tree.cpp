class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both trees are empty
        if (p == NULL && q == NULL)
            return true;

        // If one is empty and the other is not
        if (p == NULL || q == NULL)
            return false;

        // Check current node value and both subtrees
        if (p->val == q->val &&
            isSameTree(p->left, q->left) &&
            isSameTree(p->right, q->right))
            return true;

        return false;
    }
};
