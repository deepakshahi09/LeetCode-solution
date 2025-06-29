class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int in = n-1;
        int st = 0;
        int lst = n-1;
        while(st<=lst){
            int stsq = nums[st] * nums[st];
            int lstsq = nums[lst]*nums[lst];
            if(stsq < lstsq){
                ans[in] = lstsq;
                in--;
                lst--;
            }
            else{
                ans[in] = stsq;
                in--;
                st++;
            }
        }
        return ans;
        
    }
};