class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& co) {
        int ans = 0;
        int n = co.size();
        for(int i=0;i<n;i++){
            int mid = co[i];
            int lst = co[(i+1)%n];
            int first = co[(i-1+n)%n];

            if(mid != lst && mid != first){
                ans++;
            }
        }
        return ans;
    }
};