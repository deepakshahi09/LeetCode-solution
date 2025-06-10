class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};

        int st = 0;
        int lst = nums.size() - 1;

        // First occurrence (leftmost)
        while (st <= lst) {
            int mid = st + (lst - st) / 2;
            if (nums[mid] == target) {
                ans[0] = mid;
                lst = mid - 1; // keep searching in left half
            } else if (nums[mid] < target) {
                st = mid + 1;
            } else {
                lst = mid - 1;
            }
        }

        st = 0;
        lst = nums.size() - 1;

        // Last occurrence (rightmost)
        while (st <= lst) {
            int mid = st + (lst - st) / 2;
            if (nums[mid] == target) {
                ans[1] = mid;
                st = mid + 1; // keep searching in right half
            } else if (nums[mid] < target) {
                st = mid + 1;
            } else {
                lst = mid - 1;
            }
        }

        return ans;
    }
};
