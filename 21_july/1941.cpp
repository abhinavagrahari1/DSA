// 1941. Check if All Characters Have Equal Number of Occurrences  

// Given a string s, return true if s is a good string, or false otherwise.

// A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

 

// Example 1:

// Input: s = "abacbc"
// Output: true
// Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
// Example 2:

// Input: s = "aaabb"
// Output: false
// Explanation: The characters that appear in s are 'a' and 'b'.
// 'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m1;

        for(int i=0; i<s.length(); i++){
            m1[s[i]]++;
        }

        int freq= m1[s[0]];
        bool final = true;

        for(auto& x: m1){
            if(x.second != freq){
                final = false;
            }
        }

        return final;
    }
};