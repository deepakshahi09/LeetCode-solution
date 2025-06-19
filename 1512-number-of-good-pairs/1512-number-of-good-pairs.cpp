class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int freq[101] = {0};
       int ans = 0;
       for(int n:nums){
        ans+=freq[n];
        freq[n]++;
       } 
       return ans;
    }
};