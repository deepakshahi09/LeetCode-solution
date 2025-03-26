class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>array;
        int rem = grid[0][0] % x;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]%x != rem){
                    return -1;
                }
                array.push_back(grid[i][j]);
            }
        }

        sort(array.begin(),array.end());
        int stp = 0;
        int n = array.size();
        int mid = n/2;
        for(int i=0;i<n;i++){
            stp+= abs(array[i]-array[mid])/x;
        }
        return stp;
        
    }
};