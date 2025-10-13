class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        for(string s : words){
            if(!ans.empty()){
                string lst = ans.back();

                string sortword = s;
                string sortlst = lst;

                sort(sortword.begin(),sortword.end());
                sort(sortlst.begin(),sortlst.end());

                if(sortword == sortlst){
                    continue;
                }


            }
            ans.push_back(s);
        }
        return ans;
    }
};