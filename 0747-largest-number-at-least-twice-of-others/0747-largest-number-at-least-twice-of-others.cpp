class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int smax = -1;
        int fmax = -1;
        int index =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > fmax){
                smax = fmax;
                fmax = nums[i];
                index = i;
            }
            else if(nums[i] > smax){
                smax = nums[i];
            }
        }
        return smax*2 > fmax ? -1 : index;
        
    }
};