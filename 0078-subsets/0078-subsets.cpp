class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans = {{}};
        for(int num : nums){
            int p = ans.size();
            for(int i=0;i<p;i++){
                vector<int>subset = ans[i];
                subset.push_back(num);
                ans.push_back(subset);

            }
        }
        return ans;
        
    }
};