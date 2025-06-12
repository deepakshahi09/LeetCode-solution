class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size()-1;
        int maxi = abs(nums[0]-nums[n]);
        for(int i=0;i<n;i++){
            int dif = nums[i]-nums[i+1];
            maxi = max(maxi,abs(dif));
        }
        return maxi;
    }
};