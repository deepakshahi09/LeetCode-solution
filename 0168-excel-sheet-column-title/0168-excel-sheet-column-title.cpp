class Solution {
public:
    string convertToTitle(int co) {
        string ans = "";

        while (co > 0) {
            co--;                      // IMPORTANT
            int rem = co % 26;
            char c = 'A' + rem;
            ans = c + ans;
            co /= 26;
        }

        return ans;
    }
};
