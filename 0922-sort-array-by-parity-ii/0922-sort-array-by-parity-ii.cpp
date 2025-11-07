#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1;  // i → even index, j → odd index

        while (i < n && j < n) {
            if (nums[i] % 2 == 0) {
                i += 2; // correct position, move on
            } else if (nums[j] % 2 == 1) {
                j += 2; // correct position, move on
            } else {
                // nums[i] is odd and nums[j] is even → swap
                swap(nums[i], nums[j]);
                i += 2;
                j += 2;
            }
        }

        return nums;
    }
};
