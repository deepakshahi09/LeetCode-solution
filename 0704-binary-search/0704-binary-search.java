class Solution {
    public int search(int[] nums, int target) {
        int n = nums.length-1;
        int st = 0;
        int lst = n;
        while(st<lst){
            int mid = (st+lst)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                lst--;
            }
            else{
                st++;
            }
        }
        return -1;

        
    }
}