class Solution {
    public int largestAltitude(int[] gain) {
        int mx = 0;
        int ans = 0;
        for(int i=0;i<gain.length;i++){
            mx = gain[i]+mx;
            if(mx > ans){
                ans = mx;
            }
        }
        return ans;
        
    }
}