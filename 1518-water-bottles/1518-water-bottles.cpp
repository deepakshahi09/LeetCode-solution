class Solution {
public:
    int numWaterBottles(int n, int e) {
        int to = n;
        int nb,rb;
        while(n>=e){
             nb = n/e;
             rb = n%e;
            to = to+nb;
            n= rb+nb;

        }
        return to;

        
    }
};