class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>>ans;
        for(int i=0;i<in.size();i++){
            int st = in[i][0];
            int lst = in[i][1];

            if(ans.empty()){
                ans.push_back({st,lst});
            }
            else if(ans.back()[1] >= st){
                ans.back()[1] = max(ans.back()[1],lst);
            }
            else{
                ans.push_back({st,lst});
            }
        }
        return ans;
    }
};