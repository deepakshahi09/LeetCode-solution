class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }

        for(auto x : map){
            if(x.second > 1){
                return x.first;
            }
        }
        return 0;
    }
};