class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans(prices.size());
        stack<int>st;
        int i = prices.size()-1;
        while(i>=0){
            int num = prices[i];
            while(!st.empty() && st.top() > num){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = num - st.top();
            }
            else{
                ans[i] = num;
            }
            st.push(num);
            i--;
        }
       

        return ans;
    }
};