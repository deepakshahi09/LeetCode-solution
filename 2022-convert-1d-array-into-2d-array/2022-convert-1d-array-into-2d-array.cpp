class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k = original.size();
        vector<vector<int>>ans;
        if(k != m*n){
            return ans;
        }
        for(int i=0;i<m;i++){
            vector<int>row;
            for(int j=0;j<n;j++){
                row.push_back(original[i*n + j]);
            }
            ans.push_back(row);
        }
        return ans;
    }
};