class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>map;
        for(int i=0;i<nums.size();i++){
            int com = target - nums[i];
            if(map.count(com)){
                return {map[com],i};
            }
            else{
                map[nums[i]]=i;
            }
        }
        return {};
        
    }
};
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int>map;
//         for(int i=0;i<nums.size();i++){
//             int com = target-nums[i];
//             // if(map.find(com) != map.end()){ this is also correct 
//                 if(map.count(com)){           // this also works
//                     return {map[com],i};
//             }o
//             else{
//                 map[nums[i]] = i;
//             }
//         }
//         return {};
        
//     }
// };