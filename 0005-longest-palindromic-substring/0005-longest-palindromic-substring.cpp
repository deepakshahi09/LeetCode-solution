class Solution {
public:
    string longestPalindrome(string s) {
        int st = 0;
        int mxlen = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            //for even
            int a = i;
            int b = i;
            while(a>=0 && b<n && s[a] == s[b]){
                a--;
                b++;
            }
            int len = b-a-1;
            if(len > mxlen){
                mxlen = len;
                st = a+1;
            }
            
            //odd length
            a=i;
            b = i+1;
            while(a>=0 && b<n && s[a] == s[b]){
                a--;
                b++;
            }
            len = b-a-1;
            if(len > mxlen){
                mxlen = len;
                st = a+1;
            }
        }
        return s.substr(st,mxlen);
    }
};