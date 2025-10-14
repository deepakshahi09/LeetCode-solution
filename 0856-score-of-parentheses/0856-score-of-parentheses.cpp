class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        int count = 0;
        for(char c:s){
            if(c=='('){
                st.push('(');
            }
            else{
                st.pop();
                count++;
            }
        }
        return count;
    }
};