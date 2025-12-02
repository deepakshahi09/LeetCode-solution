class Solution {
public:
    void m(vector<int>& arr, int lft, int mid, int right) {
        vector<int> temp;
        int i = lft;
        int j = mid + 1;

        while(i <= mid && j <= right) {
            if(arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }

        while(i <= mid) {
            temp.push_back(arr[i++]);
        }
        while(j <= right) {
            temp.push_back(arr[j++]);
        }

        // Copy back to original array
        for(int k = lft; k <= right; k++) {
            arr[k] = temp[k - lft];
        }
    }

    void ms(vector<int>& arr, int st, int lst) {
        if(st >= lst) return;

        int mid = (st + lst) / 2;
        ms(arr, st, mid);
        ms(arr, mid + 1, lst);
        m(arr, st, mid, lst);
    }

    vector<int> sortArray(vector<int>& nums) {
        ms(nums, 0, nums.size() - 1);
        return nums;
    }
};
