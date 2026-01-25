class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        long long ans = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int n = q.size();
            long long mini = q.front().second;
            long long first, last;

            for (int i = 0; i < n; i++) {
                auto front = q.front();
                q.pop();

                long long curr = front.second - mini;

                if (i == 0) first = curr;
                if (i == n - 1) last = curr;

                if (front.first->left)
                    q.push({front.first->left, curr * 2});

                if (front.first->right)
                    q.push({front.first->right, curr * 2 + 1});
            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};
