class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        int prev = -1;
        int num1 = -1;
        int num2 = -1;
        int mindiff = 1e6;

        for(int i=left;i<=right;i++){
            if(isprime(i)){
                if(prev != -1 && i-prev < mindiff){
                    num1 = prev;
                    num2 = i;
                    mindiff = i-prev;
                }
                prev = i;
            }
        }
        return (num1 == -1) ? vector<int>{-1,-1} : vector<int>{num1,num2};
        
        
    }
};