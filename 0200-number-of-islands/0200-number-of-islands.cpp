class Solution {
public:
    void dfs(int i, int j,vector<vector<char>>&gride){
        int n = gride.size();
        int m = gride[0].size();

        if(i < 0 || j < 0 || i >= n || j>= m || gride[i][j] != '1'){
            return;
        }
        gride[i][j] = '0';
        dfs(i-1,j,gride);
        dfs(i+1,j,gride);
        dfs(i,j-1,gride);
        dfs(i,j+1,gride);

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1'){
                    c++;
                    dfs(i,j,grid);
                }
            }
        }
        return c;
    }
};