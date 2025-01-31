class Solution {
    public int[] shuffle(int[] nums, int n) {
        int ans[] = new int[n+n];
        int  j = 0;
        for(int i=0;i<n;i++){
            ans[j] = nums[i];
            ans[j+1] = nums[i+n];
            j = j+2; 
        }
       
        return ans;  
    }
}