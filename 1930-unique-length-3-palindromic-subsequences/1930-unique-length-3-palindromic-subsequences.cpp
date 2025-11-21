#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int first[26];
        int last[26];
        for (int i = 0; i < 26; i++) first[i] = last[i] = -1;

        // record first and last positions
        for (int i = 0; i < s.size(); i++) {
            int c = s[i] - 'a';
            if (first[c] == -1) first[c] = i;
            last[c] = i;
        }

        int count = 0;

        // check each character as outer char
        for (int c = 0; c < 26; c++) {
            if (first[c] != -1 && last[c] - first[c] >= 2) {
                unordered_set<char> mid;
                for (int i = first[c] + 1; i < last[c]; i++) {
                    mid.insert(s[i]);
                }
                count += mid.size();
            }
        }

        return count;
    }
};
