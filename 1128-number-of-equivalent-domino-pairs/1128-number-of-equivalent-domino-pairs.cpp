class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        vector<int>ans(100,0);
        int res = 0;
        for(auto &p : d){
            int a = min(p[0],p[1]);
            int b = max(p[0],p[1]);
            int ab = a*10 + b;
            res+=ans[ab];
            ans[ab]++;
        }
        return res;
        
    }
};