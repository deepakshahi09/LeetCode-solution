class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int st = 0;
        int lst = (n*m)-1;

        while(st <= lst){
            int mid = (st+lst)/2;

            int i = mid/m;
            int j = mid%m;

            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j] > target){
                lst = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return false;
        
    }
};