class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(n,1);
        int pre = 1;
        for(int i=0;i<n;i++){
            ans[i] = pre;
            pre = pre*nums[i];
        }
        int sufix = 1;
        for(int i=n-2;i>=0;i--){
            sufix *= nums[i+1];
            ans[i]*=sufix;
        }
       
        return ans;
        

        
    }
};