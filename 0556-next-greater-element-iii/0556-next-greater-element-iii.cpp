class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        int i = num.size() - 2;

        // Step 1: Find the first decreasing digit from the right
        while(i >= 0 && num[i] >= num[i + 1]) {
            i--;
        }

        if(i < 0) return -1;

        // Step 2: Find digit just greater than num[i] on right
        int j = num.size() - 1;
        while(num[j] <= num[i]) {
            j--;
        }

        // Step 3: Swap
        swap(num[i], num[j]);

        // Step 4: Reverse the digits after i
        reverse(num.begin() + i + 1, num.end());

        // Convert to number and check 32-bit range
        long long val = stoll(num);
        return (val <= INT_MAX) ? val : -1;
    }
};
