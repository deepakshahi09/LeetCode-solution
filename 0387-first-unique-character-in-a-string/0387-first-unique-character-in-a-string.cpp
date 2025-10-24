// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int>freq(26,0);
//         queue<pair<char,int>>q;
//         for(int i=0;i<s.size();i++){
//             char c = s[i];
//             freq[c-'a']++;
//             q.push({c,i});

//             while(!q.empty() && freq[q.front().first - 'a'] > 1){
//                 q.pop();
//             }
//         }
//         if(!q.empty()){
//             return q.front().second;
//         }
//         return -1;

        
//     }
// };


// without using queue;


class Solution {
public:
    int firstUniqChar(string s) {
         // frequency of each character
         vector<int>freq(26,0);
        // Step 1: Count frequency of each character
        for(char c: s){
            freq[c-'a']++;
        }
        

        // Step 2: Find first character with frequency = 1
       for(int i=0;i<s.size();i++){
        if(freq[s[i] - 'a'] == 1){
            return i;
        }
       }
       return -1;

        // Step 3: If no unique char found
        
    }
};
