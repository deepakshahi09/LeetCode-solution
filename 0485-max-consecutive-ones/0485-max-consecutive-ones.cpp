class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>dp(nums.size());
        int mx = 0;
        if(nums[0] == 0){
            dp[0] = 0;
            mx = 0;
        }
        else{
            dp[0] = 1;
            mx=1;
        }
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] == 1){
                dp[i] = dp[i-1] + nums[i];
                mx = max(mx,dp[i]);
            }
            else{
                nums[i]= 0;
            }
        }
        return mx;
    }
};