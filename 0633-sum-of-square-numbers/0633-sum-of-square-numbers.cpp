class Solution {
public:
    bool judgeSquareSum(int c) {
        long long st = 0;
        long long lst = sqrt(c);

        while(st <= lst){
            long long num = st*st + lst*lst;
            if(num == c){
                return true;
            }
            else if(num < c){
                st++;
            }
            else{
                lst--;
            }
        }
        return false;
    }
};