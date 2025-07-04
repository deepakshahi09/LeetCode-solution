class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n = c.size();
        int tot = 0;
        for(int i=0;i<k;i++){
            tot+=c[i];
        }
        int mx = tot;
        for(int i=1;i<=k;i++){
            tot = tot-c[k-i];
            tot = tot + c[n-i];

            mx = max(mx,tot);
        }
        return mx;
        
    }
};