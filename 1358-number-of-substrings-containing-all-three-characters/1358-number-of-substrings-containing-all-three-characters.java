class Solution {
    public int numberOfSubstrings(String s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int subarr = 0;
        int[] freq = new int[3];

        while(right < n){
            freq[s.charAt(right) - 'a']++;
            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
                subarr+=n-right;
                freq[s.charAt(left) - 'a']--;
                left++;
            }

            right++;
        }
        return subarr;
    }
}