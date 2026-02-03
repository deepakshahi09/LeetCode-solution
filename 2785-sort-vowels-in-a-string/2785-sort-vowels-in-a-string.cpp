class Solution {
public:
    string sortVowels(string s) {
        string v = "";
        
        // Step 1: collect vowels
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                v += c;
            }
        }
        
        // Step 2: sort vowels
        sort(v.begin(), v.end());
        
        // Step 3: put vowels back
        int k = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                s[i] = v[k++];
            }
        }
        
        return s;
    }
};
