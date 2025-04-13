class Solution {
    public int distinctAverages(int[] nums) {
        Arrays.sort(nums);
        Set<Double>set = new HashSet<>();
        int st = 0;
        int lst = nums.length-1;
        while(st < lst){
            double av = (nums[st] + nums[lst])/2.0;
            set.add(av);
            st++;
            lst--;
        }
        return set.size();

        
    }
}