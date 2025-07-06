class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;
       
        unordered_map<int,int>map;
        map[0] = 1;
        for(int num:nums){
            sum+=num;
            int mod = ((sum % k)+k)%k;
            count+=map[mod];
            map[mod]++;
        }
        return count;
    }
};