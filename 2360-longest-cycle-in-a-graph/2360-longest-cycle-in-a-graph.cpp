class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<int> visit(n,0);
        int ans = -1;

        for(int i=0;i<n;i++){
            if(visit[i]) continue;

            int node = i;
            int step = 0;
            unordered_map<int,int> mp;

            while(node != -1 && !visit[node]){
                visit[node] = 1;
                mp[node] = step;
                step++;

                node = edges[node];

                if(node != -1 && mp.find(node) != mp.end()){
                    ans = max(ans, step - mp[node]);
                    break;
                }
            }
        }
        return ans;
    }
};