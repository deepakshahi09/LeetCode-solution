class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy = p[0];
        int pro = 0;
        for(int n: p){
            if(buy>n){
                buy = n;
            }
            pro  += n-buy;
            buy = n;
        }
        return pro;
    }
};