class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for(int nu:nums){
            if(seen.count(nu)){
                return true;
            }
            seen.insert(nu);
        }
        return false;
        
    }
};