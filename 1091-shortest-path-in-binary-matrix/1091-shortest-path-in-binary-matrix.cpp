class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1) return -1;
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        queue<pair<int,pair<int,int>>>q;
        dist[0][0] = 0;
        q.push({0,{0,0}});

        while(!q.empty()){
            int dis = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();

            if(row == n-1 && col == m-1) return dis+1;

            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nrow = row+i;
                    int ncol = col+j;

                    if(nrow >=0 && nrow <n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0){
                        if(dis + 1 < dist[nrow][ncol]){
                            dist[nrow][ncol] = dis+1;
                            q.push({dis+1,{nrow,ncol}});
                        }
                    }
                }
            }
        }
        return -1;
    }
};