class Solution {
public:
    int countDigits(int num) {
        int count =0;
        int nu = num;
        while(num>0){
            int div = num%10;
            if(div!=0 && nu%div==0){
                count++;
            }
            num/=10;
        }
        return count;
        
    }
};