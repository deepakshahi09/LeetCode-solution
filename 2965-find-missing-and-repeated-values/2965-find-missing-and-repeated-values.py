class Solution(object):
    def findMissingAndRepeatedValues(self, grid):
        n = len(grid)
        N = n*n;
        freq = [0]*(N+1);
        miss = -1;
        rep = -1;
        for i in range(n):
            for j in range(n):
                freq[grid[i][j]] +=1;
        for i in range(1, N+1):
            if(freq[i]==2):
                rep = i;
            if(freq[i]==0):
                miss=i;
        return [rep,miss];

        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        