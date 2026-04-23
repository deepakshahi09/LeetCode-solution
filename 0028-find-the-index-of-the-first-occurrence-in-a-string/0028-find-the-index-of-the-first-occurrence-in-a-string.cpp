class Solution {
public:
    int strStr(string h, string n) {
        int i = 0;
        while(i < h.size()){
            int j = 0;
            while(j< n.size() && n[j] == h[j+i]){
                j++;
            }
            if(j == n.size()){
                return i;
            }
            i++;
        }
        return -1;
        
    }
};