class Solution(object):
    def maxProfit(self, prices):
        minpri = float('inf')
        maxpro = 0;
        for i in range(len(prices)):
            if prices[i] < minpri :
                minpri = prices[i];
            pro = prices[i]-minpri;
            if pro > maxpro:
                maxpro = pro;
        return maxpro;
        """
        :type prices: List[int]
        :rtype: int
        """
        