class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        int st = 0;
        int end = nums.length-1;
        int count = 0;
        while(st<end){
            int sum = nums[st]+nums[end];
            if(sum == k){
                count++;
                st++;
                end--;
            }
            else if(sum > k){
                end--;
            }
            else{
                st++;
            }
        }
        return count;
        
        
    }
}