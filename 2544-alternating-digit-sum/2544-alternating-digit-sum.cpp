class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        while(n>0){
            int lst = n % 10;
            sum += lst;
            n/=10;
            int ls = n % 10;
            sum-=ls;
            n/=10;
        }
        return abs(sum);
        
    }
};