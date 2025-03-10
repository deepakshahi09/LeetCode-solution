class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        int n=word.size();
        long long count = 0;

        auto isvowel = [](char ch){
            return ch =='a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        };
        for(int i=0; i<n;i++){
            unordered_set<char>vowel;
            int cons = 0;
            for(int j=i;j<n;j++){
                if(isvowel(word[j])) vowel.insert(word[j]);
                else cons++;

                if(vowel.size()==5 && cons == k){
                    count++;
                }
            }


        }
        return count;
        
    }
};