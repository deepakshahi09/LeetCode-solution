class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int co = 0;
        for(int nu : nums){
            if(nu != 0){
                nums[co] = nu;
                co++;
            }
        }
        while(co<n){
            nums[co] = 0;
            co++;
        }
        
    }
};