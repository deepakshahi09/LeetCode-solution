class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st = 0;
        int lst = nums.size()-1;
        int ans = 0;
        while(st<lst){
            int temp = nums[st]+nums[lst];
            ans = max(ans,temp);
            st++;
            lst--;
        }
        return ans;
        
    }
};