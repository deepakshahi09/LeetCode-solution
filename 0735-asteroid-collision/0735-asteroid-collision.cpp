class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int a : asteroids){
            bool dis = false;
            while(!st.empty() && a < 0 && st.top() > 0){
                if(st.top() < -a){
                    st.pop();
                    continue;
                }
                else if(st.top() == -a){
                    st.pop();
                }
                dis = true;
                break;
            }
            if(!dis){
                st.push(a);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};