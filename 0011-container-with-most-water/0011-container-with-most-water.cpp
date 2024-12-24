class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater =0;
        int st =0;
        int end = height.size()-1;
        
        while(st<end){
            int w = end-st;
            int hi = min(height[st],height[end]);
            int current=w*hi;
            maxwater = max(maxwater,current);
            
            height[st]<height[end]?st++:end--;
            
            
        }
        return maxwater;
        
    }
};