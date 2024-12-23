class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num = x;
        double rev = 0;
        
        while(x>0){
            rev = rev * 10 + (x % 10);
            x/=10;
        }
        if(rev==num){
            return true;
        }
        return false;
        
    }
};