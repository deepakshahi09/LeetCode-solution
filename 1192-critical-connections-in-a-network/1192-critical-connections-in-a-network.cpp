class Solution {
    private:
    void dfs(int node, int parent, vector<vector<int>>&bridge,vector<vector<int>>&adj,vector<int>&visit,vector<int>&low,vector<int>&dis,int &time){
        visit[node] = 1;
        low[node] = dis[node] = time++;
        for(int i : adj[node]){
            if(i == parent) continue;
            if(visit[i]){
                low[node] = min(low[node],dis[i]);
            }
            else{
                dfs(i,node,bridge,adj,visit,low,dis,time);
                low[node] = min(low[node],low[i]);
                if(low[i] > dis[node]){
                    bridge.push_back({i,node});
                }
            }
        }
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);
        for(auto &i : connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<vector<int>>bridge;
        vector<int>visit(n,0);
        vector<int>low(n);
        vector<int>dis(n);
        int time = 0;
        dfs(0,-1,bridge,adj,visit,low,dis,time);
        return bridge;
    }
};