#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;  
       
        for (int i = 0; i < word.size(); i++) {
            st.push(word[i]);
            if (word[i] == ch) break;
        }

        if (st.empty() || st.top() != ch) return word;

        int j = 0;
        while (!st.empty()) {
            word[j++] = st.top();
            st.pop();
        }

        return word;
    }
};
