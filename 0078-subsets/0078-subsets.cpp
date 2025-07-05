class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}};

        for (int num : nums) {
            int n = result.size();
            for (int i = 0; i < n; i++) {
                vector<int> subset = result[i];  // take existing subset
                subset.push_back(num);           // add current number
                result.push_back(subset);        // add new subset
            }
        }

        return result;
    }
};
