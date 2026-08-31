class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minindex = 0;
        int mxindex = 0;
        for(int i=0;i<n;i++){
            if(nums[i] < nums[minindex]){
                minindex= i;
            }
            if(nums[i] > nums[mxindex]){
                mxindex = i;
            }
        }
        int left = min(minindex,mxindex);
        int right = max(minindex,mxindex);

        int ans1 = left+1 + n-right;
        int ans2 = right+1;
        int ans3 = n-left;
        return min(ans1,min(ans2,ans3));
    }
};