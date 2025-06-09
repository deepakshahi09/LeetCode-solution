class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0;
        int lst = n-1;
        int maxw = 0;
        while(st<lst){
            int h = min(height[st],height[lst]);
            int w = lst-st;
            int ar = h*w;
            if(maxw < ar){
                maxw = ar;
            }
            if(height[st] > height[lst]){
                lst--;
            }
            else{
                st++;
            }
        }
        return maxw;
        
    }
};