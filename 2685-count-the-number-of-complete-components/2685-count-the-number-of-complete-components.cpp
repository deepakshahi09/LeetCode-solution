class Solution {
    void dfs(int curr, int& nodes, int& edges, vector<vector<int>>& adj, vector<bool>& visited) {
        nodes++;
        visited[curr] = true;
        for (int& nbr : adj[curr]) {
            edges++;
            if (!visited[nbr])
                dfs(nbr, nodes, edges, adj, visited);
        }
    }

public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int complete_components = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                int edgeCount = 0;
                int nodes = 0;
                dfs(i, nodes, edgeCount, adj, visited);

                // Since each edge is counted twice in undirected graph, divide by 2
                edgeCount /= 2;

                if (edgeCount == (nodes * (nodes - 1)) / 2)
                    complete_components++;
            }
        }
        return complete_components;
    }
};
