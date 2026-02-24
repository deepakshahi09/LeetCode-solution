class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int co = 0;
        while(!q.empty()){
            int node = q.front();
            co++;
            q.pop();
            for(int n : adj[node]){
                indegree[n]--;
                if(indegree[n] == 0){
                    q.push(n);
                }
            }
        }
        return co == numCourses;
        
    }
};







//                                 DFS + Recursion Stack Method
//                                 "Cycle detection using DFS."


// class Solution {
// public:
//     bool dfs(int node,vector<int>&visit, vector<int>&path, vector<vector<int>>& adj){
//         visit[node] = 1;
//         path[node] = 1;
//         for(int i=0;i<adj[node].size();i++){
//             int nei = adj[node][i];
//             if(path[nei] == 1){
//                 return true;
//             }
//             else if(visit[nei] == 0){
//                 if(dfs(nei,visit,path,adj)){
//                     return true;
//                 }
//             }
//         }
//         path[node] = 0;
//         return false;
//     }
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         vector<vector<int>>adj(numCourses);
//         for(int i=0;i<prerequisites.size();i++){
//             int u = prerequisites[i][0];
//             int v = prerequisites[i][1];
//             adj[v].push_back(u);
//         }
//         vector<int>visit(numCourses,0);
//         vector<int>path(numCourses,0);
//         for(int i=0;i<numCourses;i++){
//             if(visit[i] == 0){
//                 if(dfs(i,visit,path,adj)){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };