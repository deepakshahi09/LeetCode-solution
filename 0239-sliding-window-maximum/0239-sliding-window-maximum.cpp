#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq; // stores indices of elements

        for (int i = 0; i < nums.size(); i++) {
            // 1. Remove elements that are out of this window
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            // 2. Remove smaller elements from the back
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // 3. Add current element index
            dq.push_back(i);

            // 4. Store the max (front of deque) when first window is complete
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};