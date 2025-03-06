class Solution(object):
    def reverse(self, num, st, end):
        while st < end:
            num[st],num[end]=num[end],num[st];
            st+=1;
            end-=1;
    def rotate(self, nums, k):
        n = len(nums);
        k = k % n;
        self.reverse(nums,0,n-1);
        self.reverse(nums,0,k-1);
        self.reverse(nums,k,n-1);
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        