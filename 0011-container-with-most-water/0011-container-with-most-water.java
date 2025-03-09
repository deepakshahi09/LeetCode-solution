class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int st = 0;
        int end = n-1;
        int maxtw = 0;
        while(st < end){
            int h = Math.min(height[st], height[end]);
            int dis = end-st;
            int curr = h*dis;
            maxtw = Math.max(curr,maxtw);
            if(height[st] < height[end]){
                st++;
            }
            else{
                end--;
            }   
        }
        return maxtw;   
    }
}