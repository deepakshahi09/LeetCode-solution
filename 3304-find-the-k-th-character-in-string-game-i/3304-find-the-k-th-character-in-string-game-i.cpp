class Solution {
public:
    char kthCharacter(int k) {

        // Step 0: a
        // Step 1: a + b = ab
        // Step 2: ab + bc = abbc
        // Step 3: abbc + bccd = abbcbccd

        // Each new step doubles the length.
        // So:
        // step 0 → len = 1
        // step 1 → len = 2
        // step 2 → len = 4
        // step 3 → len = 8
        // step n → len = 2ⁿ

        // if(k == 1){
        //     return 'a';
        // }
        // int len = 1;
        // while(len * 2 < k){
        //     len*=2;
        // }
        // if(k > len){
        //     char prev = kthCharacter(k - len);
        //     if(prev == 'z'){
        //         return 'a';
        //     }
        //     return prev + 1;
        // }
        // return kthCharacter(k);





        int shift = __builtin_popcount(k-1);
        return 'a' + shift;
        
    }
};