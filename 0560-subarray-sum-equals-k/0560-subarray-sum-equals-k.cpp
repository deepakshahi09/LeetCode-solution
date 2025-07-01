class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>pre;
        pre[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(pre.count(sum-k)){
                count+=pre[sum-k];
            }
            pre[sum]++;
        }
        return count;
        
        
    }
};