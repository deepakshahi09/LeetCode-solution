class DSU{
    public:
    vector<int>parent,size;
    DSU(int n){
        parent.resize(n+1);
        size.resize(n+1,1);

        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }
    int find_p(int u){
        if(parent[u] == u) return u;
        return parent[u] = find_p(parent[u]);
    }

    void UnionBySize(int u, int v){
        int pu = find_p(u);
        int pv = find_p(v);

        if(pu == pv) return;
        if(size[pu] > size[pv]){
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        else{
            parent[pu] = pv;
            size[pv] += size[pu];
        }

    }
};

class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DSU ds(n*n);
        for(int row=0; row<n; row++){
            for(int col=0;col<n;col++){
                if(grid[row][col] == 0) continue;

                int delrow[] = {-1,0,1,0};
                int delcol[] = {0,1,0,-1};

                for(int i=0;i<4;i++){
                    int adjrow = row+delrow[i];
                    int adjcol = col+delcol[i];

                    if(adjrow >= 0 && adjcol >= 0 && adjrow < n && adjcol <n && grid[adjrow][adjcol] == 1){
                        int node = row*n+col;
                        int adjnode = adjrow*n+adjcol;
                        ds.UnionBySize(node,adjnode);

                    }
                }
            }
        }
        int ans = 0;
        for(int row=0; row < n; row++){
            for(int col = 0;col < n; col++){
                if(grid[row][col] == 1) continue;

                int delrow[] = {-1,0,1,0};
                int delcol[] = {0,1,0,-1};
                set<int>st;
                for(int i=0;i<4;i++){
                    int adjrow = row+delrow[i];
                    int adjcol = col+delcol[i];


                    if(adjrow >= 0 && adjrow < n && adjcol >= 0 && adjcol < n && grid[adjrow][adjcol] == 1){
                        st.insert(ds.find_p(adjrow * n + adjcol));
                    }

                }
                int total = 1;
                for(int i: st){
                    total+=ds.size[i];
                }
                ans = max(ans,total);


            }
        }
        for(int i=0;i<n*n;i++){
            if(ds.find_p(i)==i){
                ans = max(ans,ds.size[i]);
            }
        }
        return ans;
    }
};