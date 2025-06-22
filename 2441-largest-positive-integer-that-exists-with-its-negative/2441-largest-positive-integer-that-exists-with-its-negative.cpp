class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> set;
        int ans = -1;

        for (int num : nums) {
            set.insert(num);
        }

        for (int num : nums) {
            if (num > 0 && set.count(-num)) {
                ans = max(ans, num);
            }
        }

        return ans;
    }
};
