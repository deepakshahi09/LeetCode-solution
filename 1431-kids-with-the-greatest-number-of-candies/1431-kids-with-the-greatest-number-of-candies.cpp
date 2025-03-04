class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int mx = candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>mx){
                mx = candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=mx){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
        
    }
};