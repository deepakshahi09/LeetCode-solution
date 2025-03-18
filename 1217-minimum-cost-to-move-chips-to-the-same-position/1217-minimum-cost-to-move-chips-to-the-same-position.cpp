class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int od = 0;
        int evn = 0;
        for(int n:position){
            if(n%2==0){
                evn++;
            }
            else{
                od++;
            }
        }
        return od < evn ? od : evn;


        
    }
};