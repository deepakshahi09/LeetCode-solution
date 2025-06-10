#include <vector>
#include <algorithm>

class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        
        std::vector<int> leftMax(n);
        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = std::max(leftMax[i-1], height[i]);
        }
        
        std::vector<int> rightMax(n);
        rightMax[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightMax[i] = std::max(rightMax[i+1], height[i]);
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += std::min(leftMax[i], rightMax[i]) - height[i];
        }
        
        return ans;
    }
};;