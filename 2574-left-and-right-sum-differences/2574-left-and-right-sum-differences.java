class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n = nums.length;
        int[] lefts = new int[n];
        int[] rights = new int[n];
        int[] ans = new int[n];

        lefts[0] = 0;
        for(int i=1;i<n;i++){
            lefts[i] = lefts[i-1] + nums[i-1];
        }
        rights[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            rights[i] = rights[i+1] + nums[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i] = Math.abs(lefts[i] - rights[i]);
        }
        return ans;
        
    }
}