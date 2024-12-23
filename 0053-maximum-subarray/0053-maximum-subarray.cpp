class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum =0;
        int maxsum =nums[0];
        for(int num : nums){
            csum+=num;
            maxsum=(csum>maxsum)?csum:maxsum;
            if(csum<0){
                csum=0;
            }
        }
        return maxsum;
        
    }
};