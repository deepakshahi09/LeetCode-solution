class Solution {
    public int romanToInt(String s) {
        int ans = 0;
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            char chp = ' ';
            if(i<s.length()-1){
                chp = s.charAt(i+1);
            }
            
            if(ch == 'I'){
                if(chp == 'V' || chp == 'X'){
                    ans-=1;
                }
                else{
                    ans+=1;
                }
            }
            else if(ch == 'V'){
                ans+=5;
            }
            else if(ch == 'X'){
                if(chp == 'L' || chp == 'C'){
                    ans-=10;
                }
                else{
                    ans+=10;
                }
            }
            else if(ch == 'L'){
                ans+=50;
            }
            else if(ch == 'C'){
                if(chp == 'M' || chp == 'D'){
                    ans-=100;
                }
                else{
                    ans+=100;
                }
            }
            else if(ch == 'D'){
                ans+=500;
            }
            else if(ch== 'M'){
                ans+=1000;
            }
        }
        return ans;
    }
}