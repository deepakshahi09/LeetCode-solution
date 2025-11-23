class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        
        // store smallest remainders
        int r1a = 10001, r1b = 10001; 
        int r2a = 10001, r2b = 10001;

        for(int x : nums){
            sum += x;

            if(x % 3 == 1){
                if(x < r1a){
                    r1b = r1a;
                    r1a = x;
                } else if(x < r1b){
                    r1b = x;
                }
            }
            else if(x % 3 == 2){
                if(x < r2a){
                    r2b = r2a;
                    r2a = x;
                } else if(x < r2b){
                    r2b = x;
                }
            }
        }

        if(sum % 3 == 0) return sum;

        int ans = 0;
        if(sum % 3 == 1){
            // remove 1 smallest remainder-1 OR remove 2 remainder-2 numbers
            ans = sum - min(r1a, r2a + r2b);
        } else {
            // sum % 3 == 2
            ans = sum - min(r2a, r1a + r1b);
        }
        return ans;
    }
};
