class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        queue<int> q;
        vector<int> dist(n * n + 1, -1);
        q.push(1);
        dist[1] = 0;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            if (curr == n * n)
                return dist[curr];

            for (int i = 1; i <= 6; i++) {
                int next = curr + i;
                if (next > n * n)
                    break;
                int row = n - 1 - (next - 1) / n;
                int col = (next - 1) % n;

                if ((n - row) % 2 == 0)
                    col = n - 1 - col;

                if (board[row][col] != -1) {
                    next = board[row][col];
                }
                if (dist[next] == -1) {
                    dist[next] = dist[curr] + 1;
                    q.push(next);
                }
            }
        }
        return -1;
    }
};