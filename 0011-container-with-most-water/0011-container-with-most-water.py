class Solution(object):
    def maxArea(self, height):
        st = 0;
        end = len(height)-1;
        maxw = 0;
        while(st < end):
            h = min(height[st],height[end]);
            w = end-st;
            cuurr = h*w;
            maxw = max(cuurr,maxw);
            if height[st]<height[end]:
                st+=1;
            else:
                end-=1;
        return maxw;

        """
        :type height: List[int]
        :rtype: int
        """
        