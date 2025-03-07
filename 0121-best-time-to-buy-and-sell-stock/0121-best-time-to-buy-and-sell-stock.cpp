class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int maxpro = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minp){
                minp = prices[i];
            }
            int profit = prices[i]-minp;
            if(profit > maxpro){
                maxpro = profit;
            }
        }
        return maxpro;
        
    }
};