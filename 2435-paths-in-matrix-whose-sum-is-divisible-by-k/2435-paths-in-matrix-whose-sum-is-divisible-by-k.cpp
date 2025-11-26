class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        const int MOD = 1000000007;
        int m = grid.size();
        int n = grid[0].size();

        // dp[i][j][r] = number of paths to (i, j) with sum % k == r
        vector<vector<vector<int>>> dp(
            m, vector<vector<int>>(n, vector<int>(k, 0))
        );

        dp[0][0][ grid[0][0] % k ] = 1;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // पहले cell को हमने ऊपर already set कर दिया है
                if (i == 0 && j == 0) continue;

                for (int r = 0; r < k; r++) {
                    long long ways = 0;

                    // ऊपर से आ सकते हैं: (i-1, j)
                    if (i > 0) {
                        int prevVal = dp[i - 1][j][r];
                        if (prevVal) {
                            ways += prevVal;
                        }
                    }

                    // बायें से आ सकते हैं: (i, j-1)
                    if (j > 0) {
                        int prevVal = dp[i][j - 1][r];
                        if (prevVal) {
                            ways += prevVal;
                        }
                    }

                    if (ways > 0) {
                        int newRem = (r + grid[i][j]) % k;
                        dp[i][j][newRem] = (dp[i][j][newRem] + (int)(ways % MOD)) % MOD;
                    }
                }
            }
        }

        // ऐसे paths जो (m-1, n-1) पर हैं और sum % k == 0
        return dp[m - 1][n - 1][0];
    }
};
