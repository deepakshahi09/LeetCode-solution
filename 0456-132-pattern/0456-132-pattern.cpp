class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return false;
        }
        int sec = INT_MIN;
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<sec){
                return true;
            }
            while(!st.empty() && nums[i]> st.top()){
                sec = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
        
    }
};