class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        int i = 0;

        while (i < (int)batteries.size()) {
            sum += batteries[i];
            i++;
        }

        long long low = 0;
        long long high = sum / n;
        long long ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;  
            long long total = 0;
            int j = 0;

            while (j < (int)batteries.size()) {
                if ((long long)batteries[j] < mid) {
                    total += batteries[j];
                } else {
                    total += mid;
                }
                j++;
            }

            if (total >= mid * n) {
                ans = mid;         
                low = mid + 1;
            } else {
                high = mid - 1;    
            }
        }

        return ans;
    }
};
