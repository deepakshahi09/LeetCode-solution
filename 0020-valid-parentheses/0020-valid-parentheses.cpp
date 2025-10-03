class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char v = st.top();
                if(ch == ')' && v == '(' || ch == '}' && v == '{' || ch == ']' && v == '['){
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