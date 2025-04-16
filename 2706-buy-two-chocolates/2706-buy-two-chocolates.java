class Solution {
    public int buyChoco(int[] prices, int money) {
        int min1 = Integer.MAX_VALUE;
        int min2 = Integer.MAX_VALUE;
        for(int num : prices){
            if(num < min1){
                min2 = min1;
                min1 = num;
            }
            else if(num < min2){
                min2 = num;
            }
        }
        int total = min1+min2;
        if(total <= money){
            return Math.abs(total - money);
        }
        return money;
        
    }
}