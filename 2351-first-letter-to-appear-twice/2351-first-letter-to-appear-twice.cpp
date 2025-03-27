class Solution {
public:
    char repeatedCharacter(string s) {
        char freq[256] = {0};
        for(char c : s){
            freq[c]++;
            if(freq[c]==2){
                return c;
            }
        }
        return '\0';
        
    }
};