class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length() > 2){
            string ans = "";
            for(int i=0;i<s.length()-1;i++){
                ans+= to_string((s[i]-'0' + s[i+1] - '0')%10);
            }
            s = ans;
        }
        return s[0]==s[1];

        
    }
};