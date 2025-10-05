class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cou = 0;
        for(char c: s){
            if(c == '('){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    cou++;
                }
            }
        }
        return cou + st.size();


        // int open = 0;
        // int close = 0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         open++;
        //     }
        //     else{
        //         if(open>0){
        //             open--;
        //         }
        //         else{
        //             close++;
        //         }
        //     }
        // }
        // return open+close;
        
    }
};