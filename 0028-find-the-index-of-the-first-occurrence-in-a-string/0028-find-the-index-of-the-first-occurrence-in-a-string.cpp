class Solution {
public:
    int strStr(string h, string n) {
        for(int i=0;i<h.size();i++){
            int j=0;
            while(j<n.size() && i<h.size() && n[j] == h[i+j] ){
                j++;
            }
            if(j == n.size()){
                return i;
            }
        }
        return -1;
        
    }
};