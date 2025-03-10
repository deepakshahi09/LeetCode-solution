class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int count = 0;
        for(int num : nums){
            int com = k-num;
            if(freq[com]>0){
                count++;
                freq[com]--;
            }
            else{
                freq[num]++;
            }
        }
        return count;
    }
};