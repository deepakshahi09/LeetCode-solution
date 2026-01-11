class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        double n = x;
        double rev = 0;
        while(x > 0){
            int lst = x % 10;
            rev  = rev * 10 + lst;
            x/=10;
        }
        return rev==n;
        
    }
};