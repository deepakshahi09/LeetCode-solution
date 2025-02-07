class Solution {
    public int arrangeCoins(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        long l = 1, high = n;
        while (l <= high) {
            long mid = (l + high) / 2;
            long sum = mid * (mid + 1) / 2;  // Corrected formula
            
            if (sum == n) {
                return (int) mid;
            } else if (sum < n) {
                l = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return (int) high;
    }
}
