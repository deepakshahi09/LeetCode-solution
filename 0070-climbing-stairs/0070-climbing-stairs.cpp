class Solution {
public:
    int climbStairs(int n) {
       
        // if(n==1){
        //     return 1;
        // }
        // int dp[n+1];
        // dp[1] = 1;
        // dp[2] = 2;
        // for(int i=3;i<=n;i++){
        //     dp[i] = dp[i-1]+ dp[i-2]; 

        // }
        // return dp[n];

        if(n == 0 || n==1){
            return n;
        }

        int prev = 1;
        int prev2 = 1;
        int curr = 0;
        for(int i=2;i<=n;i++){
            curr = prev+prev2;
            prev2 = prev;
            prev = curr;
        }
        return curr;

        
    }
};