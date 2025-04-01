class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = 0;
        for(int nu:nums){
            n = n^nu;
        }
        return n;
        
    }
};