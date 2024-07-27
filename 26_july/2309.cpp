// 2309. Greatest English Letter in Upper and Lower Case
// Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

// An English letter b is greater than another letter a if b appears after a in the English alphabet.

 

// Example 1:

// Input: s = "lEeTcOdE"
// Output: "E"
// Explanation:
// The letter 'E' is the only letter to appear in both lower and upper case.
// Example 2:

// Input: s = "arRAzFif"
// Output: "R"
// Explanation:
// The letter 'R' is the greatest letter to appear in both lower and upper case.
// Note that 'A' and 'F' also appear in both lower and upper case, but 'R' is greater than 'F' or 'A'.
// Example 3:

// Input: s = "AbCdEfGhIjK"
// Output: ""
// Explanation:
// There is no letter that appears in both lower and upper case.

class Solution {
public:
    string greatestLetter(string s) {
        vector<int> sm(26,0);
        vector<int> cap(26,0);
        string ans;

        for(int i=0; i<s.length();i++){
            if(s[i]-'a' >=0 && s[i] -'a' <27){
                sm[s[i]-'a']= 1;
            }

            if(s[i]-'A' >=0 && s[i] -'A' <27){
                cap[s[i]-'A']= 1;
            }

        }

         for(int i=25; i>=0; i--){
                if(sm[i] ==1 && cap[i] ==1){
                    cout<<i;
                    ans.push_back(char(i+'A'));
                    break;
                }
            }
         return ans;
        
    }
};