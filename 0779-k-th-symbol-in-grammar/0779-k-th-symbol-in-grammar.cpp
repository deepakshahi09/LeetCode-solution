class Solution {
public:
    int kthGrammar(int n, int k) {
        // base case
        if (n == 1) return 0;

        int mid = 1 << (n - 2);  

        if (k <= mid) {
            // left half → no flip
            return kthGrammar(n - 1, k);
        } else {
            // right half → flip
            return !kthGrammar(n - 1, k - mid);
        }
    }
};
