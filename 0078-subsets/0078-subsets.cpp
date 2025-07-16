class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans = {{}};
        for(int num:nums){
            int n = ans.size();
            for(int i=0;i<n;i++){
                vector<int>sub = ans[i];
                sub.push_back(num);
                ans.push_back(sub);
            }
        }
        return ans;
        
    }
};