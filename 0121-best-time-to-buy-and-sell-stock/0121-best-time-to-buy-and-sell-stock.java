class Solution {
    public int maxProfit(int[] prices) {
        int minpri = Integer.MAX_VALUE;
        int maxpro = 0;
        for(int i=0;i<prices.length;i++){
            if(prices[i] < minpri){
                minpri = prices[i];
            }
            int pro = prices[i] - minpri;
            if(pro > maxpro){
                maxpro = pro;
            }
        }
        return maxpro;
        
        
    }
}