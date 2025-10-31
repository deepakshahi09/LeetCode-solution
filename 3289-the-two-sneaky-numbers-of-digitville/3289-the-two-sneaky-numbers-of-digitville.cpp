class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> freq(n, 0); // frequency array initialized with 0s

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (freq[i] == 2) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
