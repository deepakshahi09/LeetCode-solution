class Solution {
    public int[] findColumnWidth(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int[] res = new int[m];
        for(int i=0;i<m;i++){
            int max = 0;
            for(int j=0;j<n;j++){
                int len = String.valueOf(grid[j][i]).length();
                max = Math.max(max,len);
                res[i] = max;
            }
        }
        return res;
        
    }
}