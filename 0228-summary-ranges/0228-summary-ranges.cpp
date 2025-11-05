class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int n = nums.size();
        if(n == 0){
            return ans;
        }
        int st  = nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1] + 1){
                if(st == nums[i-1]){
                    ans.push_back(to_string(st));
                }
                else{
                    ans.push_back(to_string(st) + "->" + to_string(nums[i-1]));
                }
                st = nums[i];
            }
        }
        if(st == nums[n-1]){
            ans.push_back(to_string(st));
        }
        else{
            ans.push_back(to_string(st) + "->" + to_string(nums[n-1]));
        }

        return ans;
    }
};