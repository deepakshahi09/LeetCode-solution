class Solution {
public:
    void backtrack(int start, int n, int k, vector<vector<int>>& ans, vector<int>& curr){
        if(curr.size()==k){
            ans.push_back(curr);
        }
        for(int i=start;i<=n;i++){
            curr.push_back(i);
            backtrack(i+1,n,k,ans,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>curr;
        backtrack(1,n,k,ans,curr);
        return ans;
        
    }
};