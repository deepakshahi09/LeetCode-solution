class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort(strs.begin(),strs.end());
        // string s1 = strs[0];
        // string s2 = strs[strs.size()-1];
        // int i = 0;
        // int j = 0;
        // while(i<s1.size() && j<s2.size() && s1[i] == s2[j]){
        //     i++;
        //     j++;
        // }
        // return s1.substr(0,i);


        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            int j = 0;
            while(j<ans.size() && j<strs[i].size() && ans[j] == strs[i][j]){
                j++;
            }
            ans = ans.substr(0,j);
        }
        return ans;
    }
};