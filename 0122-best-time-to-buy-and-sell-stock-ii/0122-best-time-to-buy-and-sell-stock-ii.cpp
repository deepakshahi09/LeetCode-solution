class Solution {
public:
    int maxProfit(vector<int>& p) {
        int by = p[0];
        int ans= 0;
        int n = p.size();
        for(int i=1;i<n;i++){
            if(by > p[i]){
                by = p[i];
            }
            else{
                ans+=(p[i] - by);
                by = p[i];
            }
        }
        return ans;
    }
};