class Solution {
    private boolean isuniq(int n){
        int freq[] = new int[10];
        while(n > 0){
            int lst = n % 10;
            freq[lst]++;
            if(freq[lst] > 1){
                return false;
            }
            n/=10;
        }
        return true;
    }
    public int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return 10;
        }
        int num = 0;
        for(int i=0;i<n;i++){
            num = num*10+9;
        }
        int count =0;
        for(int i=0;i<num;i++){
            if(isuniq(i)){
                count++;
            }
        }
        return count;
        
    }
}