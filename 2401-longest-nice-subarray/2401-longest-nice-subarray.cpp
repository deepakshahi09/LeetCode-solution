class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int max_w_s = 0;
        int x_sum = 0;
        int c_sum = 0;

        while(right < n){
            c_sum += nums[right];
            x_sum ^= nums[right];

            while(x_sum != c_sum){
                c_sum -= nums[left];
                x_sum ^= nums[left];
                left++;
            }
            max_w_s = max(max_w_s , right-left+1);
            right++;
        }
        return max_w_s;

        
    }
};