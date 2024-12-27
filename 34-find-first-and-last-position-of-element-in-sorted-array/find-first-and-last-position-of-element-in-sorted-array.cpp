class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans = {-1,-1};
        if(nums.size()==0){
            return ans;
        } 
        ans[0]=first(nums,target);
        ans[1]=last(nums,target);
        return ans;
    }
    int first(vector<int> &nums, int target){
        int st = 0;
        int end = nums.size()-1;
        int ans = -1;

        while(st<=end){
            int mid = (st+end)/2;

            if(nums[mid]==target){
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid]>target){
                end = mid -1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;


    }
    int last(vector<int> &nums, int target){
        int ans = -1;
        int st = 0;
        int end = nums.size()-1;

        while(st<=end){
            int mid = (st+end)/2;

            if(nums[mid]==target){
                ans = mid;
                st=mid+1;
            }
            else if(nums[mid]>target){
                end = mid -1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;


    }
};