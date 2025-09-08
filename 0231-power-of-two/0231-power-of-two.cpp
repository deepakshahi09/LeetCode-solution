class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        if(n == 1){
            return 1;
        }
        while(n % 2 == 0){
            n/=2;
        }
        return n==1;
        
    }
};