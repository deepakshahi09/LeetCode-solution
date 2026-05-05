class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        for(int i=0;i<=n-3;i++){
            char a = s[i];
            char b = s[i+1];
            char c = s[i+2];
            if(a != b && b != c && a != c){
                ans++;
            }
        }
        return ans;
    }
};