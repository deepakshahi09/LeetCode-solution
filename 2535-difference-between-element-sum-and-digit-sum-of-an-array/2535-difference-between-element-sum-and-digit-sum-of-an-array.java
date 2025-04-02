class Solution {
    public int digitSum(int n){
        int sum = 0;
        while(n != 0){
            sum+=n%10;
            n = n/10;
        }
        return sum;
    }
    public int differenceOfSum(int[] nums) {
        int numsum = 0;
        int dSum = 0;
        for(int i=0;i<nums.length;i++){
            numsum+=nums[i];
            dSum += digitSum(nums[i]);
        }
        return Math.abs(numsum-dSum);
    }
}