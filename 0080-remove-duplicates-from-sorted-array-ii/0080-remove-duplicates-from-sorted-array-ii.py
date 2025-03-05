class Solution(object):
    def removeDuplicates(self, nums):

        n = len(nums);
        if(n<=2):
            return n;
        ind = 2;
        for i in range(2,n):
            if(nums[i] != nums[ind-2]):
                nums[ind] = nums[i];
                ind+=1;
            

        return ind;
        """
        :type nums: List[int]
        :rtype: int
        """
        