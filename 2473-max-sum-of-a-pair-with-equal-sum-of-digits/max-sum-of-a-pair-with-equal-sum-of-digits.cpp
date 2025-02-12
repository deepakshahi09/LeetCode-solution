class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int>maxmap;
        int result = -1;
        for(int i=0;i<nums.size();i++){
            int sum = digitsum(nums[i]);
            if(maxmap.count(sum)){
                result = max(result,maxmap[sum]+nums[i]);
                maxmap[sum]=max(maxmap[sum],nums[i]);
            }
            else{
                maxmap[sum] = nums[i];
            }
        }
        return result;


        
    }
    int digitsum(int n){
        int s = 0;
        while(n>0){
            s+= n%10;
            n/=10;
        }
        return s;
    }
};