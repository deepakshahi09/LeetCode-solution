class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        if(p[0] == p[1] || p[1]==p[2] || p[2]==p[0]){
            return false;
        }
        int x1 = p[0][0],y1 = p[0][1];
        int x2 = p[1][0],y2 = p[1][1];
        int x3 = p[2][0],y3 = p[2][1];

        return (x2-x1)*(y3-y1) != (x3-x1)*(y2-y1);
        
    }
};