class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int co = 0;
        for(int n:nums){
            if(n != 0){
                nums[co] = n;
                co++;
            }
        }
        int p = nums.size();
        while(co<p){
            nums[co] = 0;
            co++;
        }
        

    }
};