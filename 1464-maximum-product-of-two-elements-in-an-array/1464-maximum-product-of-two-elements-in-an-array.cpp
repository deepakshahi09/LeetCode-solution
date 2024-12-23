class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fmax = INT_MIN;
        int smax = INT_MIN;
        for(int val : nums){
            if(val>fmax){
                smax = fmax;
                fmax = val;
            }
            else if(val>smax){
                smax = val;
            }
            
        }
        return (fmax-1)*(smax-1);
        
        
    }
};