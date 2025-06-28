class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy = p[0];
        int maxp = 0;
        for( int n: p){
            if(buy > n){
                buy = n;
            }
            else{
                maxp = max(maxp,(n-buy));
            }
        }
        return maxp;
        
    }
};