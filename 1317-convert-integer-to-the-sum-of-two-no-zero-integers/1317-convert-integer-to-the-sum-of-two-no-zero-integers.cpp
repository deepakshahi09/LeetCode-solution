class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a,b;
        vector<int>ans;
        if(n % 2 == 0){
            a = n/2;
            b = n/2;
            ans.push_back(a);
            ans.push_back(b);
        }
        else{
            ans.push_back(n/2);
            ans.push_back(n/2+1);
        }
        return ans;
        
    }
};