class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>mp;
        int j = 0;
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[j]]--;
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
        
    }
};