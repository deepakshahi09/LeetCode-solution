class Solution {
    private void dfs(int row, int col, char[][] grid, boolean[][] visit) {
        int n = grid.length;
        int m = grid[0].length;
        visit[row][col] = true;
        int[] delrow = { -1, 0, 1, 0 };
        int[] delcol = { 0, 1, 0, -1 };
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == '1') {
                dfs(nrow, ncol, grid, visit);
            }
        }

    }

    public int numIslands(char[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int c = 0;
        boolean visit[][] = new boolean[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visit[i][j] && grid[i][j] == '1') {
                    c++;
                    dfs(i, j, grid, visit);
                }
            }
        }
        return c;

    }
}