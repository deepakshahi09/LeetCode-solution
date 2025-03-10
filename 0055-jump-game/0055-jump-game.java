class Solution {
    public boolean canJump(int[] nums) {
        int maxcount = 0;
        for(int i=0;i<nums.length;i++){
            if(i > maxcount){
                return false;
            }
            maxcount = Math.max(maxcount, i + nums[i]);
            
        }
        return true;
        
    }
}