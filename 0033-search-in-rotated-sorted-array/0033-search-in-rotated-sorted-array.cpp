class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int lst = nums.size()-1;
        while(st<=lst){
            int mid = (st+lst)/2;
            if(nums[mid]== target){
                return mid;
            }
            else if(nums[st] <= nums[mid]){
                if(target >= nums[st] && target < nums[mid]){
                    lst = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            else{
                if(target > nums[mid] && target <= nums[lst]){
                    st = mid+1;
                }
                else{
                    lst = mid-1;
                }
            }
        }
        return -1;
        
    }
};