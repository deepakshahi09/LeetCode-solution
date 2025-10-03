class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch: s){
            if(ch == '(' || ch == '{' ||  ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char p = st.top();
                if(p=='(' && ch == ')' || p == '{' && ch == '}' || p == '[' && ch==']'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
};