class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        int pre = 1;
        for(int i=0;i<n;i++){
            ans[i] = pre;
            pre = pre*nums[i];
        }
        int suf = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] = ans[i]*suf;
            suf = suf*nums[i];
        }
        return ans;
        
    }
}