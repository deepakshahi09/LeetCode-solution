class Solution {
    public int minimumRecolors(String blocks, int k) {
        int n = blocks.length();
        int minop = n;
        for(int i=0;i<=n-k;i++){
            int white = 0;
            for(int j = i;j<i+k;j++){
                if(blocks.charAt(j)=='W'){
                    white++;
                }
            }
            minop = Math.min(white,minop);
        }
        return minop;
        
    }
}