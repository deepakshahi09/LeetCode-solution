class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0;
        int lst  = nums.size()-1;
        int ans = nums[0];
        while(st<=lst){
            int mid = (st+lst)/2;
            if(nums[mid] >= nums[0]){
                st = mid+1;
            }
            else{
                ans = nums[mid];
                lst = mid-1;
            }
        }
        return ans;

    }
};