class Solution {
    boolean isvowel(char ch){
        ch = Character.toLowerCase(ch);
        return (ch == 'a' || ch =='e' || ch=='i' || ch=='o' || ch=='u');
    }
    public String reverseVowels(String s) {
        char[] arr = s.toCharArray();
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            while(i<j && !isvowel(arr[i])){
                i++;
            }
            while(i<j && !isvowel(arr[j])){
                j--;
            }
            if(i<j){
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        return new String(arr);
        
    }
}