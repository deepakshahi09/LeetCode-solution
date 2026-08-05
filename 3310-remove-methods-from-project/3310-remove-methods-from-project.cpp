class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        vector<int>visit(n,0);
        vector<int>indegree(n,0);
        for(auto &it : invocations){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int>q;
        q.push(k);
        visit[k] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto &it : adj[node]){
                indegree[it]--;
                if(!visit[it]){
                    q.push(it);
                    visit[it] = 1;
                }
            }
        }
        vector<int>res;
        bool cntrm  = false;
        for(int i=0;i<n;i++){
            if(visit[i] && indegree[i] > 0){
                cntrm = true;
                break;
            }
        }
        
        if(cntrm){
            vector<int>vec(n);
            for(int i=0;i<n;i++){
                vec[i] = i;
            }
            return vec;

        }
        for(int i=0;i<n;i++){
            if(!visit[i]){
                res.push_back(i);
            }
        }
        return res;


    }
};