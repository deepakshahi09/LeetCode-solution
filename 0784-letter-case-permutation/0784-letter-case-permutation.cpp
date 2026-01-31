class Solution {
public:
    vector<string>ans;
    void solve(int i, string &s){
        if(i == s.size()){
            ans.push_back(s);
            return;
        }
        if(isdigit(s[i])){
            solve(i+1, s);
        }
        else{
            char ch = s[i];
            s[i] = tolower(s[i]);
            solve(i+1,s);
            s[i] = toupper(s[i]);
            solve(i+1,s);
            s[i] = ch;
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(0,s);
        return ans;
    }
};