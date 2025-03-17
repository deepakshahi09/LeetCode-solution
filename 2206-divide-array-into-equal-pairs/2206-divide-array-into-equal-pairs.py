from collections import Counter
class Solution(object):
    def divideArray(self, nums):
        freq = Counter(nums)
        for count in freq.values():
            if(count % 2 != 0):
                return False
        return True

       
        """
        :type nums: List[int]
        :rtype: bool
        """
        