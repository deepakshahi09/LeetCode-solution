class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int num = 0;
        int tcount = 0;
        for(int ele : nums){
            if(ele == target){
                tcount++;
            }
            if(ele < target){
                num++;
            }
        }
        vector<int>ans;
        while(tcount > 0){
            ans.push_back(num);
            num++;
            tcount--;
        }
        return ans;








        // sort(nums.begin(),nums.end());
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        
    }
};