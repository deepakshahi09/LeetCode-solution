class Solution(object):
    def maxOperations(self, nums, k):
        nums.sort()
        st = 0
        end = len(nums)-1
        count = 0

        while st < end:
            sum = nums[st]+nums[end];
            if sum == k:
                count+=1;
                st+=1
                end-=1
            elif sum > k:
                end-=1
            else:
                st+=1
        return count;

        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        