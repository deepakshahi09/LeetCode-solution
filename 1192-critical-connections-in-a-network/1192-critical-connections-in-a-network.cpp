class Solution {
private:
    void dfs(int node, int parent, vector<int> adj[],
             vector<int>& tin, vector<int>& visit,
             vector<int>& low, vector<vector<int>>& ans,
             int& timer) {

        visit[node] = 1;
        tin[node] = low[node] = timer++;

        for(int it : adj[node]) {

            if(it == parent)
                continue;

            if(!visit[it]) {

                dfs(it, node, adj, tin, visit, low, ans, timer);

                low[node] = min(low[node], low[it]);

                if(low[it] > tin[node]) {
                    ans.push_back({node, it});
                }
            }
            else {
                low[node] = min(low[node], tin[it]);
            }
        }
    }

public:
    vector<vector<int>> criticalConnections(
        int v, vector<vector<int>>& connections) {

        int n = v;

        vector<int> adj[v];

        for(auto it : connections) {

            int u = it[0];
            int w = it[1];

            adj[u].push_back(w);
            adj[w].push_back(u);
        }

        vector<int> tin(n, 0);
        vector<int> visit(n, 0);
        vector<int> low(n, 0);

        vector<vector<int>> ans;

        int timer = 0;

        dfs(0, -1, adj, tin, visit, low, ans, timer);

        return ans;
    }
};