class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum = nums[0];
        int currentmax = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                currentmax=currentmax+nums[i];
            }
            else{
                maxsum=std::max(maxsum,currentmax);
                currentmax=nums[i];
            }
        }
        maxsum=std::max(maxsum,currentmax);
        return maxsum;   
    }
};

