class Solution {
public:
    int maxProfit(vector<int>& p) {
       int by = p[0];
       int maxp = 0;
       for(int i=1;i<p.size();i++){
        if(p[i] < by){
            by = p[i];
        }
        else{
            int pr = p[i] - by;
            maxp = max(maxp,pr);
        }
       }
       return maxp; 
        
    }
};