class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0, count = 0;
        while(n > 0){
            int temp = n % 10;
            count++;
            if(count % 2 != 0) sum -= temp;
            else sum += temp;
            n /= 10;
        }
        return count % 2 == 0 ? sum : -sum;
    }
};