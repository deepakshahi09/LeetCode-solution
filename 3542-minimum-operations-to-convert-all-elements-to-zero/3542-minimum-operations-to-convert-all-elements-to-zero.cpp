#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ops = 0;
        vector<int> st; // use vector as stack

        for (int i = 0; i < n; ++i) {
            int x = nums[i];
            if (x == 0) {
                st.clear();
                continue;
            }
            // pop all elements greater than x
            while (!st.empty() && st.back() > x) st.pop_back();
            if (st.empty() || st.back() < x) {
                st.push_back(x);
                ++ops;
            }
            // if st.back() == x -> already counted, nothing to do
        }
        return ops;
    }
};
