class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(string op : logs){
            if(op == "./"){
                continue;
            }
            else if(!st.empty() && op == "../"){
                st.pop();
            }
            else{
                st.push(op);
            }
        }
        return st.size();
        
    }
};