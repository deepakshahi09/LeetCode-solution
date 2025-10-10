class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans = prices;
        int n = ans.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && prices[i] <= prices[st.top()]){
                int idx = st.top();
                st.pop();
                ans[idx] = prices[idx] - prices[i];
            }
            st.push(i);
        }
        return ans;
        
    }
};