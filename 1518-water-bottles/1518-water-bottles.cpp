class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            int newb = numBottles/numExchange;
            int old = numBottles%numExchange;
            ans+=newb;
            numBottles = old+newb;
        }
        return ans;
        
    }
};