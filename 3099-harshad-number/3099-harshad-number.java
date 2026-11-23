class Solution {
    private int sum(int num){
        int sum = 0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    public int sumOfTheDigitsOfHarshadNumber(int x) {
        int su = sum(x);
        if(x % su == 0){
            return su;
        }
        return -1;
    }
}