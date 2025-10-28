class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxsum = nums[0];
        int minsum = nums[0];
        int curmx = 0;
        int curmin = 0;
        for(int x: nums){
            curmx = max(curmx+x,x);
            maxsum = max(maxsum,curmx);

            curmin = min(curmin+x,x);
            minsum = min(curmin,minsum);

            total+=x;
        }
        if(maxsum < 0){
            return maxsum;
        }
        return max(maxsum,total - minsum);
        
        
    }
};