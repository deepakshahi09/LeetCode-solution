class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int st = i+1;
            int lst = n-1;

            while(st<lst){
                int sum = nums[i] + nums[st] + nums[lst];
            if(sum==0){
                ans.push_back({nums[i],nums[st],nums[lst]});
                st++;
                lst--;
                while(st<lst && nums[st]==nums[st+1]){
                    st++;
                }
                while(st<lst && nums[lst] == nums[lst+1]){
                    lst--;
                }


            }
            else if(sum<0){
                st++;
            }
            else{
                lst--;
            }
            }
        }
        return ans;
        
    }
};