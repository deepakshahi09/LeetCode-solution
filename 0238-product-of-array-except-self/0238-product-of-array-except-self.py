class Solution(object):
    def productExceptSelf(self, nums):
        n = len(nums);
        pre = 1
        ans = [1]*n;
        for i in range(n):
            ans[i] = pre;
            pre *=nums[i];
        suf = 1;
        for i in range(n-1,-1,-1):
            ans[i]*=suf;
            suf *=nums[i];
        return ans;

        """
        :type nums: List[int]
        :rtype: List[int]
        """
        