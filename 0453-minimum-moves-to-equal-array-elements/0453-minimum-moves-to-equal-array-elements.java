class Solution {
    public int minMoves(int[] nums) {
        int mn = nums[0];
        int sum = 0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(nums[i] < mn){
                mn = nums[i];
            }
        }
        return sum - nums.length * mn;
    }
}