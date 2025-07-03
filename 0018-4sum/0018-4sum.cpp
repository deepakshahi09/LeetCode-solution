class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }

                int st = j+1;
                int lst = n-1;
                while(st < lst){
                    long long sum = (long long)nums[i]+nums[j]+nums[st]+nums[lst];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[st],nums[lst]});
                        while(st<lst && nums[st]==nums[st+1]){
                            st++;
                        }
                        while(st<lst && nums[lst]==nums[lst-1]){
                            lst--;
                        }
                    }
                    if(sum>target){
                        lst--;
                    }
                    else{
                        st++;
                    }

                }
            }
        }
        return ans;
        
    }
};