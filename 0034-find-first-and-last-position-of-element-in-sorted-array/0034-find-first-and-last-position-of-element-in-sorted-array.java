class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] arr = new int[2];
        arr[0] = -1;
        arr[1] = -1;


        int st = 0;
        int end = nums.length-1;
        while(st <= end){
            int mid = (st+end)/2;
            if(nums[mid]==target){
                arr[0] = mid;
                end = mid-1;
            }
            else if(nums[mid] < target){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        st = 0;
        end = nums.length-1;
        while(st <= end){
            int mid = (st+end)/2;
            if(nums[mid]==target){
                arr[1] = mid;
                st = mid+1;
            }
            else if(nums[mid] < target){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return arr;
    }
    
}