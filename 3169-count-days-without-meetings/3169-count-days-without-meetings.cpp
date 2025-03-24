#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& me) {
        sort(me.begin(), me.end()); // Sort meetings by start time

        int occday = 0;
        int pre = 0;
        
        for (int i = 0; i < me.size(); i++) {
            int st = me[i][0];
            int end = me[i][1];

            if (st > pre) { 
                // If the current meeting starts after the previous one ended, count fresh days
                occday += end - st + 1;
            } 
            else if (end > pre) { 
                // If overlapping, count only the new days beyond `pre`
                occday += end - pre;
            }
            
            pre = max(pre, end); // Update `pre` to track the last occupied day
        }
        
        return days - occday; // Available days = total days - occupied days
    }
};
