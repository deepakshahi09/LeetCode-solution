class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int mindis = Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                int dis = Math.abs(i-start);
                if(dis < mindis){
                    mindis = dis;  
                }
            }
        }
        return mindis;
        
    }
}