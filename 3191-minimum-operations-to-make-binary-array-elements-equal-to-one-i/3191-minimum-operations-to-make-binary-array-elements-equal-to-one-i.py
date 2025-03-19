class Solution(object):
    def minOperations(self, nums):
        op = 0
        n = len(nums)
        for i in range(n):
            if nums[i] == 0:
                if i+2 < n:
                    nums[i] ^= 1
                    nums[i+1] ^= 1
                    nums[i+2] ^= 1
                    op+=1
                else:
                    return -1
        return op
        """
        :type nums: List[int]
        :rtype: int
        """
        