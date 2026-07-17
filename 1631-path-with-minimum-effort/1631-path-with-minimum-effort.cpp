class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        dist[0][0] = 0;
        pq.push({0,{0,0}});
        int delrow[] = {0,1,0,-1};
        int delcol[] = {-1,0,1,0};
        while(!pq.empty()){
            int dis = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            if(row == n-1 && col == m-1) return dis;
            pq.pop();

            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                
                if(nrow >= 0 && nrow <n && ncol >= 0 && ncol < m){
                    int effort = max(abs(heights[nrow][ncol] - heights[row][col]),dis);
                    if(effort < dist[nrow][ncol]){
                        dist[nrow][ncol] = effort;
                        pq.push({effort,{nrow,ncol}});
                    }
                }
            }
        }
        return -1;


    }
};