class Solution(object):
    def reverseVowels(self, s):

        vowel = ("aeiouAEIOU")
        s = list(s);
        i = 0;
        j = len(s)-1;

        while(i<j):
            while(i< j and s[i] not in vowel):
                i=i+1;
            while(i<j and s[j] not in vowel):
                j=j-1;
            if(i<j):
                s[i],s[j] = s[j],s[i];
                i=i+1;
                j=j-1;
        
        return "".join(s);
        """
        :type s: str
        :rtype: str
        """
        