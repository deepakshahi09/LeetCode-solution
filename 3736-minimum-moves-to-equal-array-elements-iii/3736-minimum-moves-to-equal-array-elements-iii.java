class Solution {
    public int minMoves(int[] nums) {
        int mx = nums[0];
        for(int i : nums){
            mx = Math.max(mx,i);
        }
        int mv = 0;
        for(int i : nums){
            mv+=mx - i;
        }
        return mv;
    }
}