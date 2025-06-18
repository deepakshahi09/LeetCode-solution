class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evn = 0;
        for(int i=0;i<nums.size();i++){
            int dig = countdigit(nums[i]);
            if(dig % 2 == 0){
                evn++;
            }
        }
        return evn;
        
    }
public:
    int countdigit(int n){
        int c = 0;
        while(n>0){
            c++;
            n/=10;
        }
        return c;
    }
};