class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        sort(interval.begin(),interval.end());
        vector<vector<int>>ans;
        for(int i=0;i<interval.size();i++){
            int st = interval[i][0];
            int end = interval[i][1];

            if(ans.empty() || ans.back()[1] < st){
                ans.push_back({st,end});
            }
            else{
                ans.back()[1]=max(ans.back()[1],end);
            }
        }
        return ans;
        
    }
};