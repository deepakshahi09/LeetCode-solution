class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n = 0;
        // for(int nu:nums){
        //     n = n^nu;
        // }
        // return n;
        int n = 0;
        int i = 0;
        int m = nums.size();
        while(m>0){
            n = n ^ nums[i];
            i++;
            m--;
        }
        return n;
        
    }
};