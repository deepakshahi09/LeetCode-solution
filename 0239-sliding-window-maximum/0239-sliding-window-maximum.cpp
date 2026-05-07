// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int>ans;
//         deque<int>dq;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             while(!dq.empty() && nums[dq.back()] <= nums[i]){
//                 dq.pop_back();
//             }
//             dq.push_back(i);
//             if(dq.front() <= i-k){
//                 dq.pop_front();
//             }
//             if(i>=k-1){
//                 ans.push_back(nums[dq.front()]);
//             }
//         }
//         return ans;
//     }
// };



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int> l;
        int i = 0, j = 0;

        if (k > nums.size()) {
            ans.push_back(*max_element(nums.begin(), nums.end()));
            return ans;
        }

        while (j < nums.size()) {

            while (!l.empty() && l.back() < nums[j]) {
                l.pop_back();
            }
            l.push_back(nums[j]);

            if (j - i + 1 < k) {
                j++;
            }
            else { // window size == k
                ans.push_back(l.front());

                if (l.front() == nums[i]) {
                    l.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
