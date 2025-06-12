class Solution {
public:
    int maxProfit(vector<int>& p) {
        int minprice = p[0];
        int maxpro = 0;
        for(int i=1;i<p.size();i++){
            if(p[i]<minprice){
                minprice = p[i];
            }
            else{
                maxpro = max(maxpro,p[i]-minprice);
            }
        }
        return maxpro;
        
    }
};