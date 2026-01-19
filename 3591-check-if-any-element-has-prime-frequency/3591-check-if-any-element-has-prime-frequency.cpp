class Solution {
public:
    bool isPrime(int x) {
        if (x <= 1) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false;
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        int freq[101] = {0};

        // count frequency
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // check prime frequency
        for (int i = 0; i <= 100; i++) {
            if (isPrime(freq[i])) {
                return true;
            }
        }
        return false;
    }
};
