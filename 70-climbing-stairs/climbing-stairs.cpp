class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1; // Base case for 1 step
        if (n == 2) return 2; // Base case for 2 steps
        
        int prev1 = 2; // Ways to climb to step 2
        int prev2 = 1; // Ways to climb to step 1
        int current;

        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2; // Compute current number of ways
            prev2 = prev1;          // Shift prev2 to prev1
            prev1 = current;        // Update prev1 to current
        }

        return current;
        
    }
};