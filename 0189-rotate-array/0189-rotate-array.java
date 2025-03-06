class Solution {
    private void reverse(int[] num,int st,int lst){
        while(st<lst){
            int temp = num[st];
            num[st] = num[lst];
            num[lst] = temp;
            lst--;
            st++;
        }
    }
    public void rotate(int[] nums, int k) {
        int n = nums.length;

        k = k % n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
}