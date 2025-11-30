class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for(int x : nums) total += x;
        
        int need = total % p;
        if(need == 0) return 0;
        
        unordered_map<int, int> mp;
        mp[0] = -1;  // prefix mod before starting
        
        long long prefix = 0;
        int ans = nums.size();
        
        for(int i = 0; i < nums.size(); i++) {
            prefix = (prefix + nums[i]) % p;
            int target = (prefix - need + p) % p; // we need this to match a previous prefix
            
            if(mp.find(target) != mp.end()) {
                ans = min(ans, i - mp[target]);
            }
            
            mp[prefix] = i;
        }
        
        return (ans == nums.size() ? -1 : ans);
    }
};
