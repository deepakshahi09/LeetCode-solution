class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set(nums.begin(),nums.end());
        int longest = 0;
        for(int num:nums){
            if(set.find(num-1) == set.end()){
                int curr = num;
                int currstr = 1;
            
            while(set.find(curr+1) != set.end()){
                curr++;
                currstr++;
            }
            longest = max(longest,currstr);
        }
        }
        return longest;
        
    }
};