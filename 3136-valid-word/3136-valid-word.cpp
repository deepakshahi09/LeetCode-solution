class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3){
            return false;
        }
        bool vo = false;
        bool con = false;

        for(char ch: word){
            if(!isalnum(ch)){
                return false;
            }
            if(isalpha(ch)){
                char low = tolower(ch);
                if(low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u'){
                    vo = true;
                }
                else{
                    con = true;
                }
            }
        }
        return vo && con;
    }
};