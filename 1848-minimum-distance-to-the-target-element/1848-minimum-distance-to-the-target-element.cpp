class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDist = nums.size();  // set to max possible distance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                int dist = abs(i - start);
                if (dist < minDist) {
                    minDist = dist;
                }
            }
        }
        return minDist;
    }
};
