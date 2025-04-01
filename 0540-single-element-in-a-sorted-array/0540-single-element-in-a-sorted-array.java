class Solution {
    public int singleNonDuplicate(int[] nums) {
        // int n = 0;
        // int m = nums.length;
        // int i = 0;
        // while(m!=0){
        //     n = n ^ nums[i];
        //     i++;
        //     m--;
        // }
        // return n;

        int st = 0;
        int lst = nums.length-1;
        while(st < lst){
            int mid = (st+lst)/2;
            if(mid % 2 == 1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                st = mid + 2;
            }
            else{
                lst = mid;
            }
        }
        return nums[st];
        
    }
}