class Solution {
public:
    int minimumRecolors(string blo, int k) {
       int ans = 0;
        int wc = 0;
        for(int i=0;i<k;i++){
            if(blo[i] == 'W'){
                wc++;
            }   
        }
        ans = wc;
        for(int i=k;i<blo.size();i++){
            if(blo[i] == 'W'){
                wc++;
            }
            if(blo[i-k] == 'W'){
                wc--;
            }
            ans = min(ans,wc);
        }
        return ans;
    }
};