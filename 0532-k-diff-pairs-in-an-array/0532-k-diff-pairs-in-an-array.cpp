class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int>fr;
        for(int n:nums){
            fr[n]++;
        }

        for(auto&pair : fr){
            int num =pair.first;
            if(k==0){
                if(pair.second > 1){
                    count++;
                }
            }
            else{
                if(fr.count(num+k)){
                count++;
                }
            }

        }
        return count;
        
    }
};