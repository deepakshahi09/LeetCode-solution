class Solution {
public:
    int minimumRecolors(string b, int k) {
        int n = b.size();
        int minop = n;
        for(int i=0;i<=n-k;i++){
            int white = 0;
            for(int j=i;j<i+k;j++){
                
                if(b[j]=='W'){
                    white++;
                }
            }
            minop = (white < minop) ? white : minop;
        }
        return minop;
        
    }
};