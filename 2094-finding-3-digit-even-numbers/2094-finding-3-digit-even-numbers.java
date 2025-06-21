class Solution {
    public int[] findEvenNumbers(int[] digits) {
        Set<Integer> ans = new TreeSet<>();
        int n = digits.length;
        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                for(int k=0;k<n;k++){
                    if(i==j  || k==j || i==k) continue;
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(num % 2 == 0){
                        ans.add(num);
                    }
                }
            }
        }
        int[] res = new int[ans.size()];
        int ind = 0;
        for(int num: ans){
            res[ind++] = num;
        }
        return res;
    }
}