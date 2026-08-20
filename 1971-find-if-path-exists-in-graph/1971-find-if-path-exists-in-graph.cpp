class Solution {
    private:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&visit){
            visit[node] = 1;
            for(auto &it: adj[node]){
                if(!visit[it]){
                    dfs(it,adj,visit);
                }
            }
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto &it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>visit(n,0);
        dfs(source,adj,visit);
        if(visit[destination]){
            return true;
        }
        return false;
    }
};