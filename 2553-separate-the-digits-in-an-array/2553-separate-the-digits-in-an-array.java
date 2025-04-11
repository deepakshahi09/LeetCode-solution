class Solution {
    public int[] separateDigits(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        for(int n : nums){
            String str = Integer.toString(n);
            for(char ch : str.toCharArray()){
                ans.add(ch - '0');
            }
        }
        int[] result = new int[ans.size()];
        for(int i=0;i<ans.size();i++){
            result[i] = ans.get(i);
        }
        return result;

        
    }
}