class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int lst = nums.size()-1;
        while(st <= lst){
            int mid = (st+lst)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid] > target){
                lst = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return st;
        
    }
};