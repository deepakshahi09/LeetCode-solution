class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int current = 0;
        int fur = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i] > fur){
                fur = i + nums[i];
            }
            if(i == current){
                jump++;
                current = fur;
            }
        }
        return jump;
        
    }
};