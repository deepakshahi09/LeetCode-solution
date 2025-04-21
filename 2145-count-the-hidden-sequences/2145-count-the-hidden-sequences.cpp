class Solution {
public:
    int numberOfArrays(vector<int>& d, int lower, int upper) {
        long long curr = 0;
        long long mi = 0;
        long long mx = 0;
        for(int& e:d){
            curr+=e;
            mi = min(mi,curr);
            mx = max(mx,curr);
        }
        int c = (upper - lower) - (mx - mi) + 1;
        return c > 0? c: 0;
        
    }
};