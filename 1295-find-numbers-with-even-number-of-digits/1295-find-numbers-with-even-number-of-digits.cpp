class Solution {
public:
    int countdigit(int n){
        int count = 0;
        while(n>0){
            count++;
            n/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int evn = 0;
        for(int i=0;i<nums.size();i++){
            int p = countdigit(nums[i]);
            if(p % 2 == 0){
                evn++;
            }
        }
        return evn;
        
    }
};