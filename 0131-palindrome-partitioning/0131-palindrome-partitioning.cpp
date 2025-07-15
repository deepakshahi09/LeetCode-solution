class Solution {
public:
    bool ispeli(string &s, int st, int end){
        while(st<end){
            if(s[st++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    void backtrack(int st, string s, vector<vector<string>>& ans, vector<string>& curr){
        if(st == s.size() ){
            ans.push_back(curr);
            return;
        }
        for(int i=st;i<s.size();++i){
            if(ispeli(s,st,i)){
                curr.push_back(s.substr(st,i-st+1));
                backtrack(i+1,s,ans,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>curr;
        backtrack(0,s,ans,curr);
        return ans;
    }
};