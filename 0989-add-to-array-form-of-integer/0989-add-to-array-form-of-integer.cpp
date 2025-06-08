class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int p = num.size()-1;
        int carry = 0;
        while(p >= 0 || k > 0){
            int numval = 0;
            if(p >= 0){
                numval = num[p];
            }
           int sum = numval+k%10+carry;
           int digit = sum %10;
           carry = sum/10;
           ans.push_back(digit);
           p--;
           k/=10;
        }
        if(carry > 0){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};