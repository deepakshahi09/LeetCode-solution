class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int med = nums[n/2];
        int move = 0;
        for(int i : nums){
            move+= Math.abs(i-med);
        }
        return move;
    }
}