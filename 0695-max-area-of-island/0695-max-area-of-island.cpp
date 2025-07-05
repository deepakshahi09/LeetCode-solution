class Solution {
    public:
    int dfs(vector<vector<int>>&g ,int i, int j){
        if(i<0 || j<0 || i==g.size() || j == g[0].size()|| g[i][j]==0){
            return 0;
        }
        int count = 1;
        g[i][j] = 0;
        count+=dfs(g,i+1,j);
        count+=dfs(g,i,j+1);
        count+=dfs(g,i,j-1);
        count+=dfs(g,i-1,j);
        return count;

    }
public:

    int maxAreaOfIsland(vector<vector<int>>& g) {
        int max_sixe = 0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    int island = dfs(g,i,j);
                    max_sixe = max(max_sixe,island);
                }
            }
        }
        return max_sixe;
        
    }
};