class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0;
        int lst = n-1;
        int ans = 0;
        while(st<lst){
            int h = min(height[st],height[lst]);
            int w = lst-st;
            int ar = h*w;
            if(ans < ar){
                ans= ar;
            }
            if(height[st] < height[lst]){
                st++;
            }
            else{
                lst--;
            }
        }
        return ans;
        
    }
};