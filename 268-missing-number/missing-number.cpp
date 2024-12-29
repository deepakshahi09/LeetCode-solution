class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int giv_sum =0;
        for(int i=0;i<nums.size();i++){
            giv_sum+=nums[i];
        }
        int n=nums.size();
        int act_sum = (n*(n+1))/2;

        return act_sum-giv_sum;;
    }
};