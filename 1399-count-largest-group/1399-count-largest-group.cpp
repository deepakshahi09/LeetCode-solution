class Solution {
public:
    int countLargestGroup(int n) {
        int freq[37] = {0};
        for(int i=1;i<=n;i++){
            int sum = 0;
            int x = i;
            while(x > 0){
                int lst = x % 10;
                sum+=lst;
                x/=10;
            }
            freq[sum]++;
        }
        int ma = 0;
        for(int i=0;i<37;i++){
            if(freq[i] > ma){
                ma = freq[i];
            }
        }
        int gro = 0;
        for(int i=0;i<37;i++){
            if(freq[i]==ma){
                gro++;
            }
        }
        return gro;

        
    }
};