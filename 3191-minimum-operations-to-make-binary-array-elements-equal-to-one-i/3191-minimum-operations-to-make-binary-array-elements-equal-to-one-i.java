class Solution {
    public int minOperations(int[] nums) {
        int op = 0;
        int n = nums.length;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                if(i+2 < n){
                    nums[i] ^=1;
                    nums[i+1] ^=1;
                    nums[i+2] ^=1;
                    op++;

                }
                else{
                    return -1;
                }
            }
        }
        return op;

        
    }
}