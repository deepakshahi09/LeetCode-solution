class Solution {
    private:
    int area(vector<int>&arr){
        int n = arr.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = -1;
            }
            else{
                left[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                right[i] = n;
            }
            else{
                right[i] = st.top();
            }
            st.push(i);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int len = right[i] - left[i] -1;
            int wid = len * arr[i];
            ans = max(ans,wid);
        }
        return ans;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>>arr(n,vector<int>(m,0));

        for(int i=0;i<m;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                if(matrix[j][i] == '1'){
                    sum++;
                }
                else{
                    sum = 0;
                }
                arr[j][i] = sum;
            }
        }
        int finalans= 0;
        for(int i=0;i<n;i++){
            int an = area(arr[i]);
            finalans = max(finalans,an);
        }
        return finalans;

    }
};