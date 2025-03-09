class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int count = 0;

        // We check for alternating sequences
        for (int i = 0; i < n; i++) {
            bool valid = true;

            // Check if subarray from i to i + k - 1 is alternating
            for (int j = 1; j < k; j++) {
                if (colors[(i + j) % n] == colors[(i + j - 1) % n]) {
                    valid = false;
                    break;
                }
            }
            if (valid) count++; // If valid sequence found, increment count
        }
        
        return count;
    }
};
