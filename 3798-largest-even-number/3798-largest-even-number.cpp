class Solution {
public:
    string largestEven(string s) {
        int lstwo = -1;
        for(int i=0;i<s.size();i++){
            if(s[i] == '2'){
                lstwo = i;
            }
        }
        if(lstwo == -1){
            return "";
        }
        return s.substr(0,lstwo+1);
        
    }
};