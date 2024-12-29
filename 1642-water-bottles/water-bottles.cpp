class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        

         int ans = numBottles;
        while(numBottles>=numExchange){
            int newBottle = numBottles / numExchange;
            int rem = numBottles % numExchange;
            ans =ans+ newBottle;
            numBottles = newBottle+rem;
        }
        return ans;
        
        
        

        
    }
};