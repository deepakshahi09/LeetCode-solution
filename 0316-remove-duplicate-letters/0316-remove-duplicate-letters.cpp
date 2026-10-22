class Solution {
public:
    string removeDuplicateLetters(string s) {
        int freq[26] = {0};
        bool visit[26] = {false};
        string st = "";
        for(char ch : s){
            freq[ch -'a']++;
        }
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            freq[ch-'a']--;
            if(visit[ch-'a']){
                continue;
            }
            while(st.size() > 0 && ch < st[st.size()-1] && freq[st[st.size()-1] -'a']){
                visit[st[st.size() -1] -'a']=false;
                st.pop_back();
            }
            st+=ch;
            visit[ch-'a']=true;
        }
        return st;
        


    }
};