class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        int N = n*n;
        int miss=-1;
        int rep = -1;
        int[] freq = new int[N+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(freq[i]==2){
                rep = i;
            }
            if(freq[i]==0){
                miss = i;
            }
        }
        return new int[]{rep,miss};
        
        
    }
}