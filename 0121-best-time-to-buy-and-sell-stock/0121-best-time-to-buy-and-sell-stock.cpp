class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int pro = 0;
        for(int price : prices){
            if(price<minprice){
                minprice = price;
            }
            else if(price-minprice > pro){
                pro=price-minprice;
            }
        }
        return pro;
        
    }
};