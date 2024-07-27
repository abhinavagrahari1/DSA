// 2506. Count Pairs Of Similar Strings
// You are given a 0-indexed string array words.

// Two strings are similar if they consist of the same characters.

// For example, "abca" and "cba" are similar since both consist of characters 'a', 'b', and 'c'.
// However, "abacba" and "bcfd" are not similar since they do not consist of the same characters.
// Return the number of pairs (i, j) such that 0 <= i < j <= word.length - 1 and the two strings words[i] and words[j] are similar.

 

// Example 1:

// Input: words = ["aba","aabb","abcd","bac","aabc"]
// Output: 2
// Explanation: There are 2 pairs that satisfy the conditions:
// - i = 0 and j = 1 : both words[0] and words[1] only consist of characters 'a' and 'b'. 
// - i = 3 and j = 4 : both words[3] and words[4] only consist of characters 'a', 'b', and 'c'. 
// Example 2:

// Input: words = ["aabb","ab","ba"]
// Output: 3
// Explanation: There are 3 pairs that satisfy the conditions:
// - i = 0 and j = 1 : both words[0] and words[1] only consist of characters 'a' and 'b'. 
// - i = 0 and j = 2 : both words[0] and words[2] only consist of characters 'a' and 'b'.
// - i = 1 and j = 2 : both words[1] and words[2] only consist of characters 'a' and 'b'.
// Example 3:

class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<set<char>> a;
        for(int i=0; i<words.size(); i++){
            set<char> c1;
            for(int j=0; j<words[i].length(); j++){
                c1.insert(words[i][j]);
            }
            a.push_back(c1);
        }
        int counter = 0;

        for(int j=0; j<a.size()-1; j++){
            for(int k=j+1; k<a.size(); k++){
                if(a[j] == a[k]){
                    counter++;
                }
            }
        }
        return counter;
    }
};