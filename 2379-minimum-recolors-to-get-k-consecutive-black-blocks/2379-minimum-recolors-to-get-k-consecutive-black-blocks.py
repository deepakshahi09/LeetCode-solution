class Solution(object):
    def minimumRecolors(self, blocks, k):
        n = len(blocks);
        min = n;
        for i in range (0,n-k+1):
            whi = 0;
            for i in range(i,i+k):
                if blocks[i]=='W':
                    whi+=1;
            if whi < min:
                min = whi;
        return min;
        """
        :type blocks: str
        :type k: int
        :rtype: int
        """
        