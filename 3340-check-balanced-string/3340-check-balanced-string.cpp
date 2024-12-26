class Solution {
public:
    bool isBalanced(string num) {
        
        int oddsum = 0;
        int evensum = 0;
      
        
        for(int i=0;i<num.size();i++){
            
            int digit = num[i]-'0';
            
            if(i%2==0){
                oddsum+=digit;
            }
            else{
                evensum+=digit;
            }
            
        }
        return oddsum==evensum;
      
    }
};