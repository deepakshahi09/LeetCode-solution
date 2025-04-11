class Solution {
    public long findTheArrayConcVal(int[] nums) {
        int ans = 0;
        int st = 0;
        int end = nums.length - 1;
        while(st < end){
            String c = String.valueOf(nums[st]) + String.valueOf(nums[end]);
            ans+= Long.parseLong(c);
            st++;
            end--;
        }
        if(st==end){
            ans+=nums[st];
        }
        return ans;
        
    }
}