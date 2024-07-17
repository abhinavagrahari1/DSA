// 2315. Count Asterisks

// You are given a string s, where every two consecutive vertical bars '|' are grouped into a pair. In other words, the 1st and 2nd '|' make a pair, the 3rd and 4th '|' make a pair, and so forth.

// Return the number of '*' in s, excluding the '*' between each pair of '|'.

// Note that each '|' will belong to exactly one pair.

class Solution {
public:
    int countAsterisks(string s) {
        int count =0;
        int ast_count= 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '|'){
                count++;
            }
            if(count%2 == 0 && s[i] =='*'){
                ast_count++;
            }
        }
        return ast_count;
    }
};