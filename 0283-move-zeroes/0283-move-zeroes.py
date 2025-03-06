class Solution(object):
    def moveZeroes(self, nums):
        n = len(nums);
        count = 0;
        for i in range(n):
            if nums[i] != 0:
                nums[count] = nums[i];
                count+=1;
        while count < n :
            nums[count] = 0;
            count+=1;
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        