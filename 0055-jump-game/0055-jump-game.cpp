class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxco = 0;
        for(int i=0;i<nums.size();i++){
            if(i > maxco){
                return false;
            }
            maxco = max(maxco, i+nums[i]);
        }
        return true;
    }
   
};