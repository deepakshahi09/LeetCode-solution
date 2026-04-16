class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int i = 0;
        while(i < nums.size()){
            int com = target - nums[i];
            if(mp.count(com)){
                return {mp[com],i};
            }
            mp[nums[i]] = i;
            i++;
        }
        return {};
    }
};