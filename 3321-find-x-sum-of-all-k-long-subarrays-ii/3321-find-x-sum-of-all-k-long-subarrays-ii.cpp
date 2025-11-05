#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    using ll = long long;
    using P = pair<int, int>; // (frequency, value)

    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<ll> ans;

        unordered_map<int, int> freq; // value -> frequency
        multiset<P> top, rest;        // maintain top x elements (by freq, value)

        auto moveToTop = [&](int val) {
            P p = {freq[val], val};
            rest.erase(rest.find(p));
            top.insert(p);
        };

        auto moveToRest = [&](int val) {
            P p = {freq[val], val};
            top.erase(top.find(p));
            rest.insert(p);
        };

        auto balance = [&]() {
            // keep top.size() == x
            while ((int)top.size() > x) {
                auto it = top.begin(); // smallest in top
                rest.insert(*it);
                top.erase(it);
            }
            while ((int)top.size() < x && !rest.empty()) {
                auto it = prev(rest.end()); // largest in rest
                top.insert(*it);
                rest.erase(it);
            }
        };

        ll topSum = 0; // track sum of elements in "top" by actual window elements

        auto add = [&](int val) {
            int oldFreq = freq[val];
            if (oldFreq) {
                // remove old freq from sets
                P p = {oldFreq, val};
                if (top.count(p)) {
                    top.erase(top.find(p));
                    topSum -= 1LL * oldFreq * val;
                } else rest.erase(rest.find(p));
            }
            freq[val]++;
            P np = {freq[val], val};
            rest.insert(np);

            // Rebalance
            balance();

            // fix which elements belong to top
            while (!rest.empty() && (top.size() < x ||
                   *prev(rest.end()) > *top.begin())) {
                P addItem = *prev(rest.end());
                rest.erase(prev(rest.end()));
                top.insert(addItem);
            }

            while ((int)top.size() > x) {
                P removeItem = *top.begin();
                top.erase(top.begin());
                rest.insert(removeItem);
            }

            // Recalculate topSum
            topSum = 0;
            for (auto [f, v] : top) topSum += 1LL * f * v;
        };

        auto remove = [&](int val) {
            int oldFreq = freq[val];
            P p = {oldFreq, val};

            if (top.count(p)) {
                top.erase(top.find(p));
                topSum -= 1LL * oldFreq * val;
            } else rest.erase(rest.find(p));

            freq[val]--;
            if (freq[val]) {
                P np = {freq[val], val};
                rest.insert(np);
            } else freq.erase(val);

            // Rebalance sets
            balance();

            while (!rest.empty() && (top.size() < x ||
                   *prev(rest.end()) > *top.begin())) {
                P addItem = *prev(rest.end());
                rest.erase(prev(rest.end()));
                top.insert(addItem);
            }

            while ((int)top.size() > x) {
                P removeItem = *top.begin();
                top.erase(top.begin());
                rest.insert(removeItem);
            }

            // Recalculate topSum
            topSum = 0;
            for (auto [f, v] : top) topSum += 1LL * f * v;
        };

        for (int i = 0; i < n; ++i) {
            add(nums[i]);
            if (i >= k) remove(nums[i - k]);
            if (i >= k - 1) ans.push_back(topSum);
        }

        return ans;
    }
};
