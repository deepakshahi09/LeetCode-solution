class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxn = -1;
        int smax = -1;
        int maxind = -1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>maxn){
                smax = maxn;
                maxn = nums[i];
                maxind = i;
            }
            else if(nums[i]>smax){
                smax = nums[i];
            }
        }

        return (smax*2<=maxn)?maxind:-1;
        
    }
};