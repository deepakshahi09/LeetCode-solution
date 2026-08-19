class Solution {
    private:
    void dfs(int row, int col,vector<vector<char>>& grid,vector<vector<int>>& visit){
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};

        visit[row][col] = 1;
        
        for(int i=0;i<4;i++){
            int nrow = delrow[i] + row;
            int ncol = delcol[i]+col;

            if(nrow < n && ncol <m && nrow >=0 && ncol >= 0 && !visit[nrow][ncol] && grid[nrow][ncol] == '1'){
                dfs(nrow,ncol,grid,visit);
            }
        }
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j] == '1'){
                    c++;
                    dfs(i,j,grid,visit);
                }
            }
        }
        return c;
    }
};



// class Solution {
//     private:
//     void bfs(int ro,int co,vector<vector<int>>&visit, vector<vector<char>>&grid){
//         queue<pair<int,int>>q;
//         int delrow[] = {-1,0,1,0};
//         int delcol[] = {0,-1,0,1};
//         int n = grid.size();
//         int m = grid[0].size();
//         q.push({ro,co});
//        // visit[ro][co] = 1;
//         while(!q.empty()){
//             int row = q.front().first;
//             int col = q.front().second;
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int nrow = row+delrow[i];
//                 int ncol = col+delcol[i];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !visit[nrow][ncol]){
//                     visit[nrow][ncol] = 1;
//                     q.push({nrow,ncol});
//                 }
//             }
//         }
//     }
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int count = 0;
//         vector<vector<int>>visit(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j] == '1' && !visit[i][j]){
//                     count++;
//                     bfs(i,j,visit,grid);
//                 }
//             }
//         }
//         return count;
//     }
// };