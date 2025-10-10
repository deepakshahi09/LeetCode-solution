class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else if(st.top() == 'A' && ch == 'B'){
                st.pop();
            }
            else if(st.top() == 'C' && ch == 'D'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        return st.size();
        
    }
};