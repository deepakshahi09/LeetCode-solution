#include <vector>
using namespace std;

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        
        // Mark guards and walls
        for (auto &g : guards) grid[g[0]][g[1]] = 1;
        for (auto &w : walls) grid[w[0]][w[1]] = 2;

        // Horizontal scan
        for (int i = 0; i < m; i++) {
            bool seen = false;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
            seen = false;
            for (int j = n - 1; j >= 0; j--) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
        }

        // Vertical scan
        for (int j = 0; j < n; j++) {
            bool seen = false;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
            seen = false;
            for (int i = m - 1; i >= 0; i--) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
        }

        // Count unguarded cells (0)
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) count++;
            }
        }
        return count;
    }
};
