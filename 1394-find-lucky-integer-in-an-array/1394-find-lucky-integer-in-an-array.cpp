class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501]= {0};
        for(int i:arr){
            freq[i]++;
        }
        int lucyn = -1;
        for(int i=1;i<=500;i++){
            if(freq[i]==i){
                lucyn = max(i,lucyn);
            }
        }
        return lucyn;
        
    }
};