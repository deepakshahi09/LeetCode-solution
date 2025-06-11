class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int lstnegind = lstnegative(nums)+1;
        int firstpositindex = nums.size()-firstpositive(nums);
        return max(lstnegind,firstpositindex);

        
    }
public:
    int lstnegative(vector<int>& nums){
        int st = 0;
        int lst = nums.size()-1;
        int ans = -1;
        while(st<=lst){
            int mid = (st+lst)/2;
            if(nums[mid] < 0){
                ans = mid;
                st = mid+1;
            }
            else{
                lst = mid-1;
            }
        }
        return ans;
    }
public:
    int firstpositive(vector<int>&nums){
        int st = 0;
        int lst = nums.size()-1;
        int ans = nums.size();
        while(st <= lst){
            int mid = (st+lst)/2;
            if(nums[mid] > 0){
                ans  = mid;
                lst = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};