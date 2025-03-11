class Solution(object):
    def numberOfSubstrings(self, s):
        right = 0
        left = 0
        sub = 0
        n = len(s)
        freq = [0,0,0];
        while(right < n):
            freq[ord(s[right])-ord('a')]+=1;
            while all(freq):
                sub+=n-right;
                freq[ord(s[left])-ord('a')]-=1;
                left+=1
            right+=1;
        return sub;


        """
        :type s: str
        :rtype: int
        """
        