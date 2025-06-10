class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        // If the array has only one element or is not rotated
        if (nums.size() == 1 || nums[start] < nums[end]) {
            return nums[0];
        }
        while (start <= end) {
            int mid = start + (end - start) / 2;
            // Check if mid is the minimum element
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }
            // Check if the element after mid is the minimum
            if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }
            // Decide which half to search in
            if (nums[start] <= nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1; // This line will not be reached in a rotated sorted array
    }
};
