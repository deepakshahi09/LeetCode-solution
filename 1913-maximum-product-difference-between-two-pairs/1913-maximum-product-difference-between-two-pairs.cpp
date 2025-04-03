class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int mxp = nums[0]*nums[1];
        int minp = nums[0]*nums[1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != j && nums[i]*nums[j] > mxp){
                    mxp = nums[i]*nums[j];
                }
                if(i != j && nums[i]*nums[j] < minp){
                    minp = nums[i]*nums[j];
                }

            }

        }
        return (mxp-minp);
        
    }
};