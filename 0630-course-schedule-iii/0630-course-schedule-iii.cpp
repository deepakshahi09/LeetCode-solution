class Solution {
public:
    int scheduleCourse(vector<vector<int>>& c) {
        
        sort(c.begin(),c.end(),[](vector<int>&a,vector<int>&b){
            return a[1] < b[1];
        });
        priority_queue<int>maxheap;
        int total = 0;
        for(int i=0;i<c.size();i++){
            int duration = c[i][0];
            int lastday = c[i][1];

            total+=duration;
            maxheap.push(duration);

            if(total > lastday){
                total -= maxheap.top();
                maxheap.pop();
            }
        }
        return maxheap.size();
    }
};