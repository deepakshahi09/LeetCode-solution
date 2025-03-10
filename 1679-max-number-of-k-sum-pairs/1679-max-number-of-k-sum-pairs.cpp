
// using hash map

// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         unordered_map<int,int>freq;
//         int count = 0;
//         for(int num : nums){
//             int com = k-num;
//             if(freq[com]>0){
//                 count++;
//                 freq[com]--;
//             }
//             else{
//                 freq[num]++;
//             }
//         }
//         return count;
//     }
// };




// using 2 pointer approch 
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int st = 0;
        int end = nums.size()-1;
        while(st<end){
            int sum = nums[st]+nums[end];
            if(sum==k){
                count++;
                st++;
                end--;
            }
            else if(sum > k){
                end--;
            }
            else{
                st++;
            }
        }
        return count;


    }
};