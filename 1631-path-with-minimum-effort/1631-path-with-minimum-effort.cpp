class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>
        > pq;

        pq.push({0,{0,0}});
        dist[0][0] = 0;

        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};
        
        while(!pq.empty()){
            int effort = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();
            if(x == n-1 && y == m-1){
                return effort;
            }
            for(int i =0;i<4;i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(nx >= 0 && ny >= 0 && nx < n && ny < m){
                    int neweff = max(effort, abs(heights[x][y] - heights[nx][ny]));
                    if(neweff < dist[nx][ny]){
                        dist[nx][ny] = neweff;
                        pq.push({neweff,{nx,ny}});
                    }
                }
            }
        }
        return 0;

    }
};