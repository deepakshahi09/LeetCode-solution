class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>>visit(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    visit[i][j] = 1;
                }
            }
        }
        int ans = 0;
        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int c = q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nrow = i+delrow[k];
                int ncol = j+delcol[k];

                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == 1){
                    visit[nrow][ncol] = 1;
                   
                    q.push({{nrow,ncol},c+1});
                    ans = max(ans,c+1);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && !visit[i][j]){
                    return -1;
                }
            }
        }
        return ans;
    }
};