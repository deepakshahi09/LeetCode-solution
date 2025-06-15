class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        int c = 0;
        for(int i=2;i<n;i++){
            if(isprime(i)){
                c++;
            }
        }
        return c;  
    }
public:
    bool isprime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
};