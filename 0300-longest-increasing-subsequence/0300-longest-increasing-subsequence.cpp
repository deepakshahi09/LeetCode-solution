// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n,1);
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<i;j++){
//                 if(nums[j] < nums[i]){
//                     dp[i] = max(dp[i],dp[j]+1);
//                 }
//             }
//             ans=max(dp[i],ans);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        
        for(int num : nums) {
            auto it = lower_bound(temp.begin(), temp.end(), num);
            
            if(it == temp.end())
                temp.push_back(num);
            else
                *it = num;
        }
        
        return temp.size();
    }
};
