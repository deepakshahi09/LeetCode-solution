class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        for(char c : word){
            st.push(c);
            if(c==ch){
                break;
            }
        }
        if(st.empty() || st.top() != ch){
            return word;
        }
        int j = 0;
        while(!st.empty()){
            word[j] = st.top();
            st.pop();
            j++;
        }
        return word;
    }
};