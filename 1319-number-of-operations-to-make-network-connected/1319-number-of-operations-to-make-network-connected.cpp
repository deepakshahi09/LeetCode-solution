class Solution {
    class DSU{
        public:
        vector<int>parent,rank;
        DSU(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);
            for(int i=0;i<=n;i++){
                parent[i] = i;
            }  
        }

        int findparent(int u){
            if(u == parent[u]) return u;

            return parent[u] = findparent(parent[u]);
        }

        void unionbyrank(int u, int v){
            int pu = findparent(u);
            int pv = findparent(v);

            if(pu == pv){
               return;
            }
            if(rank[pu] > rank[pv]){
                parent[pv] = pu;
            }
            else if(rank[pv] > rank[pu]){
                parent[pu] = pv;
            }
            else{
                parent[pu] = pv;
                rank[pv]++;
            }
        }
    };
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int extra = 0;
        DSU ds(n);
        for(auto &it : connections){
            int u = it[0];
            int v = it[1];
            if(ds.findparent(u) == ds.findparent(v)){
               extra++; 
            }
            else{
                ds.unionbyrank(u,v);
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(ds.findparent(i) == i){
                cnt++;
            }
        }
        int ans = cnt-1;
        if(extra >= ans){
            return ans;
        }
        return -1;

    }
};