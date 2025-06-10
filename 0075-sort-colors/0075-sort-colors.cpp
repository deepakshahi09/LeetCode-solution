class Solution {
public:
    void sortColors(vector<int>& nums) {
        return sort(nums.begin(),nums.end());
        // int low,mid = 0;
        // int high = nums.size()-1;
        // while(mid<=high){
        //     if(nums[mid]==0){
        //         swap(nums,low,mid);
        //         low++;
        //         mid++;
        //     }
        //     else if(nums[mid]==1){
        //         mid++;
        //     }
        //     else{
        //         swap(nums,high,mid);
        //         high--;
        //     }
        // }
    }
    // public: void swap(vector<int>&nums,int i, int j){
    //     int temp = nums[i];
    //     nums[i]=nums[j];
    //     nums[j]=temp;
    // }
    
};