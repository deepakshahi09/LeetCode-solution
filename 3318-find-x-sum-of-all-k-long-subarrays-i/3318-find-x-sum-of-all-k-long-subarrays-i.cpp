#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    using P = pair<int,int>; // {freq, value}

    int findTopXsum(unordered_map<int,int>& mp, int x) {
        priority_queue<P, vector<P>, greater<P>> pq; // min heap

        for (auto &it : mp) {
            pq.push({it.second, it.first}); // (frequency, number)
            if (pq.size() > x)
                pq.pop();
        }

        int sum = 0;
        while (!pq.empty()) {
            auto [freq, val] = pq.top();
            pq.pop();
            sum += freq * val;
        }
        return sum;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        int i = 0;

        for (int j = 0; j < n; j++) {
            mp[nums[j]]++;

            if (j - i + 1 == k) {
                ans.push_back(findTopXsum(mp, x));
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                i++;
            }
        }

        return ans;
    }
};
