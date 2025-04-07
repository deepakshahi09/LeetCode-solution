class Solution {
    public int arraySign(int[] nums) {
        int n = 1;
        for(int p:nums){
           if(p==0){
            return 0;
           }
           if(p < 0){
            n = n* (-1);
           }
        }
        return n;
       
        
    }
}