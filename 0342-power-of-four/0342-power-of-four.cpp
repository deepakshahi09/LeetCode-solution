class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        int st = 0;
        int lst = n;
        while(st <= lst){
            long long mid = (st+lst)/2;
            long long po = mid*mid*mid*mid;
            if(po == n){
                return true;
            }
            else if(po > n){
                lst = mid-1;
            }
            else{
                st = mid +1;
            }
        }
        return false;
        
    }
};