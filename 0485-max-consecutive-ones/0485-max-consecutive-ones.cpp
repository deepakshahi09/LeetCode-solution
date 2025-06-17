class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int mcount = 0;
        for(int n:nums){
            if(n==1){
                count++;
                mcount = max(count,mcount);
            }
            else{
                count = 0;
            }
        }
        return mcount;
        
    }
};