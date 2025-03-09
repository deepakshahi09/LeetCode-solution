class Solution(object):
    def maxProfit(self, prices):
        pro = 0;
        n = len(prices);
        for i in range(1,n):
            if prices[i] > prices[i-1]:
                pro+=prices[i]-prices[i-1];
        return pro
        """
        :type prices: List[int]
        :rtype: int
        """
        