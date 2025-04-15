class Solution {
    public int[] findColumnWidth(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int[] ans = new int[m];
        for(int i=0;i<m;i++){
            int maxl = 0;
            for(int j=0;j<n;j++){
                int len = String.valueOf(grid[j][i]).length();
                maxl = Math.max(len,maxl);
            }
            ans[i] = maxl;
        }
        return ans;
        
    }
}