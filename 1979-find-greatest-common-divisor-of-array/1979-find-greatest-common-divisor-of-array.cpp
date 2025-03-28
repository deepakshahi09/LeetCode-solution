class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = nums[0];
        int min = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > mx){
                mx = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        return gcd(min,mx);
    }
};