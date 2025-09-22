class Solution {
public:
    double myPow(double x, int N) {
        // long long n = N;
        // if(n==0){
        //     return 1.0;
        // }
        // if(n<0){
        //     x = 1/x;
        //     n = -n;
        // }
        // double res = 1.0;
        // while(n>0){
        //     if(n % 2 == 1){
        //         res*=x;
        //     }
        //     x *=x;
        //     n/=2;
        // }
        // return res;
        return pow(x,N);
        
    }
};