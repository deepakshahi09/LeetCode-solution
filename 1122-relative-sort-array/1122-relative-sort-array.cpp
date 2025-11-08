class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> order;
        for (int i = 0; i < arr2.size(); i++) {
            order[arr2[i]] = i;  // store the order of elements in arr2
        }

        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            // If both elements exist in arr2, compare by their index
            if (order.count(a) && order.count(b))
                return order[a] < order[b];
            // If only one exists in arr2, the one that exists should come first
            if (order.count(a))
                return true;
            if (order.count(b))
                return false;
            // If neither exist in arr2, sort normally (ascending)
            return a < b;
        });

        return arr1;
    }
};
