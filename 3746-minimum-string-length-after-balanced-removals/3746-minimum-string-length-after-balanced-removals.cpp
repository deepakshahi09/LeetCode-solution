class Solution {
public:
    int minLengthAfterRemovals(string s) {
        
        stack<char> st;
        
        for(char c : s){
            
            if(!st.empty() && st.top() != c){
                st.pop();   // remove balanced pair
            }
            else{
                st.push(c);
            }
        }
        
        return st.size();
    }
};