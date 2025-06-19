class Solution {
public:
    int maximumWealth(vector<vector<int>>& ac) {
        int mx = 0;
        int row = ac.size();
        int col = ac[0].size();
        for(int i=0;i<row;i++){
            int sum = 0;
            for(int j=0;j<col;j++){
                sum +=ac[i][j];
            }
            mx = max(sum,mx);
        }
        return mx;
    }
};