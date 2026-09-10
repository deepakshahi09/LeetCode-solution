class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(char ch : text){
            mp[ch]++;
        }
        int c = 0;
        int i = 0;
        string s = "balloons";
        while(mp[s[i]] != 0){
            mp[s[i]]--;
            i++;
            if(i == 7){
                c++;
                i = 0;
            }
        }
        return c;
        
    }
};