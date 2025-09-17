class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;

        for(int i=0;i<intervals.size();i++){

            int st = intervals[i][0];
            int lst = intervals[i][1];

            if(ans.empty() || ans.back()[1] < st){
                ans.push_back({st,lst});
            }
            else{
                ans.back()[1] = max(ans.back()[1], lst);
            }
        }
        return ans;
        
    }
};