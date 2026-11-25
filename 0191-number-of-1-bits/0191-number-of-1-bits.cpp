class Solution {
public:
    int hammingWeight(int n) {
        
        int co = 0;
        while(n>0){
            int p = n%2;
            if(p==1){
                co++;
            }
            n/=2;
        }
        return co;
    }
};