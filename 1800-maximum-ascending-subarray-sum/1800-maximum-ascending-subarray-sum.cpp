class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currentsum = nums[0];
        int maxsum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] < nums[i]){
                currentsum+=nums[i];
            }
            else{
                currentsum = nums[i];
            }
            maxsum = max(currentsum,maxsum);
        }
        return maxsum;
    }
};