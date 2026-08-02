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
    int find(int u){
        if(parent[u] == u){
            return u;
        }
        return parent[u] = find(parent[u]);
    }

    void unionbyrank(int u,int v){
        int pu = find(u);
        int pv = find(v);

        if(pu == pv) return;
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


class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& acc) {
        int n = acc.size();
        DSU ds(n);
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            for(int j=1;j<acc[i].size();j++){
                string mail = acc[i][j];
                if(mp.find(mail) == mp.end()){
                    mp[mail] = i;
                }
                else{
                   ds.unionbyrank(i,mp[mail]);
                }
            }
        }
        vector<vector<string>>mergemail(n);
        for(auto &it : mp){
            string mail = it.first;
            int node = ds.find(it.second);
            mergemail[node].push_back(mail);
        }

        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            if(mergemail[i].size() == 0){
                continue;
            }
            sort(mergemail[i].begin(),mergemail[i].end());
            vector<string>temp;
            temp.push_back(acc[i][0]);
            for(string s : mergemail[i]){
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;



    }
};