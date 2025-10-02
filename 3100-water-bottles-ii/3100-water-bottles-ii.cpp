class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int piliya = numBottles;
        int khali = numBottles;
        while(khali >= numExchange){
            khali -= numExchange;
            numExchange++;
            piliya++;
            khali++;
        }
        return piliya;
    }
};