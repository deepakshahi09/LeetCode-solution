class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& visit,
             vector<vector<char>>& board, int delrow[], int delcol[]) {
        visit[row][col] = 1;
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                !visit[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, visit, board, delrow, delcol);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>> visit(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            if(board[i][0] == 'O'){
                dfs(i,0,visit,board,delrow,delcol);
            }

            if(board[i][m-1] == 'O'){
                dfs(i,m-1,visit,board,delrow,delcol);
            }
        }

        for(int i=0;i<m;i++){
            if(board[0][i] == 'O'){
                dfs(0,i,visit,board,delrow,delcol);
            }

            if(board[n-1][i] == 'O'){
                dfs(n-1,i,visit,board,delrow,delcol);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }

    }
};