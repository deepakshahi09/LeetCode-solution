class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>seen;
        unordered_set<int>dou;
        for(int n:nums){
            if(seen.contains(n)){
                dou.insert(n);
            }
            else{
                seen.insert(n);
            }
        }
        return vector<int>(dou.begin(),dou.end());
        
    }
};