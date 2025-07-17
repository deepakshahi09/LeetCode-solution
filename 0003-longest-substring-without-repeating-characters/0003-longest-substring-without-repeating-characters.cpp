class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ch;
        int st = 0;
        int lst = 0;
        int mxc = 0;
        while(lst<s.size()){
            if(!ch.count(s[lst])){
                ch.insert(s[lst]);
                mxc = max(mxc,lst-st +1);
                lst++;
            }
            else{
                ch.erase(s[st]);
                st++;
            }
        }
        return mxc;

        
    }
};