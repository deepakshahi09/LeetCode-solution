class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int lst = nums.size();
        while(st<lst){
            int mid = (st+lst)/2;
            if(nums[mid]==target){
                return mid;

            }
            else if(nums[mid] > target){
                lst--;
            }
            else{
                st++;
            }
        }
        return -1;
        
    }
};