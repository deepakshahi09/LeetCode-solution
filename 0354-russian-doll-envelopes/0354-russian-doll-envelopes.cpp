class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& en) {
        sort(en.begin(),en.end(),[](vector<int>&a,vector<int>&b){
            if(a[0] == b[0]){
                return a[1] > b[1];
            }
            else{
                return a[0] < b[0];
            }
        });

        vector<int>dp;
        for(auto  h: en){
            int e = h[1];
            auto it = lower_bound(dp.begin(),dp.end(),e);
            if(it == dp.end()){
                dp.push_back(e);
            }
            else{
                *it = e;
            }
        }
        return dp.size();
    }
};