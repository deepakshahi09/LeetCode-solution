class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        vector<int>ans = arr;
        int n = arr.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                int idx = st.top();
                st.pop();
                ans[idx] = arr[idx] - arr[i];
            }
            st.push(i);
        }
        return ans;
        
    }
};