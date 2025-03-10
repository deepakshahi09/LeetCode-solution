class Solution(object):
    def busyStudent(self, s, e, q):
        c = 0
        for i in range(len(s)):
            if s[i] <= q and e[i] >= q:
                c+=1
        return c
        
        """
        :type startTime: List[int]
        :type endTime: List[int]
        :type queryTime: int
        :rtype: int
        """
        