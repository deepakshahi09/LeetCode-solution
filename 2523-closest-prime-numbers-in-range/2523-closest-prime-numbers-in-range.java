class Solution {
    public boolean isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public int[] closestPrimes(int left, int right) {
        int prev = -1;
        int num1 = -1;
        int num2 = -1;
        int min = 1000;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                if(prev != -1 && (i-prev) < min){
                    num1 = prev;
                    num2 = i;
                    min = i-prev;
                }
                prev = i;

            }
        }
        return (num1==-1)?new int[]{-1,-1} : new int[]{num1,num2};

        
    }
}