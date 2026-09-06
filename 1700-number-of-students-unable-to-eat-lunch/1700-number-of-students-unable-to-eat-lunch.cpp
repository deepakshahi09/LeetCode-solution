class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>q;

        for(int i : students){
            q.push(i);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }

        int c = 0;
        
        while(!st.empty()){
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                c = 0;
            }
            else{
                q.push(q.front());
                q.pop();
                c++;
            }
            if(c == q.size()){
                return q.size();
            }
        }
        return 0;
    }
};