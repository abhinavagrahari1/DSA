// 1704. Determine if String Halves Are Alike

// You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

// Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

// Return true if a and b are alike. Otherwise, return false.

 

// Example 1:

// Input: s = "book"
// Output: true
// Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
// Example 2:

// Input: s = "textbook"
// Output: false
// Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
// Notice that the vowel o is counted twice.
 

// Constraints:

// 2 <= s.length <= 1000
// s.length is even.
// s consists of uppercase and lowercase letters.

class Solution {
public:
    bool halvesAreAlike(string s) {
        int fhc = 0;
        int shc =0;
        for(int i =0 ; i<s.length()/2; i++){
            if(s[i] == 'a' || s[i] =='A' || s[i] =='e' || s[i] =='E' || s[i]=='I' || s[i] =='i' || s[i] == 'o' || s[i] == 'O'  || s[i] =='u' || s[i] == 'U'){
                fhc++;
            }

            if(s[i+s.length()/2] == 'a' || s[i+s.length()/2] =='A' || s[i+s.length()/2] =='e' || s[i+s.length()/2] =='E' || s[i+s.length()/2]=='I' || s[i+s.length()/2] =='i' || s[i+s.length()/2] == 'o' || s[i+s.length()/2] == 'O'  || s[i+s.length()/2] =='u' || s[i+s.length()/2] == 'U'){
                shc++;
            }
        }
        return fhc ==shc;
    }
};