class Solution {
    private:
    bool dfs(int node,vector<int>&visit,vector<vector<int>>&adj,int col){
        visit[node] = col;
        for(int i : adj[node]){
            if(visit[i] == -1){
                if(dfs(i,visit,adj,!col) == false){
                    return false;
                }
            }
            if(visit[node] == visit[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& adj) {
        int n = adj.size();

        vector<int>visit(n,-1);
        for(int i=0;i<n;i++){
            if(visit[i] == -1){
                if(dfs(i,visit,adj,0)==false){
                    return false;
                }
            }
        }
        return true;
        
    }
};