class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        int third = INT_MAX;

        for(int i=0;i<nums.size();i++){
            int ele = nums[i];
            if(first >= ele){
                first = ele;
            }
            else if(second >= ele){
                second = ele;
            }
            else{
                third = ele;
                return true;
            }
        }
        return false;
    }
};