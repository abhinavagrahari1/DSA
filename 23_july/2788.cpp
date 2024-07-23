// 2788. Split Strings by Separator
// Given an array of strings words and a character separator, split each string in words by separator.

// Return an array of strings containing the new strings formed after the splits, excluding empty strings.

// Notes

// separator is used to determine where the split should occur, but it is not included as part of the resulting strings.
// A split may result in more than two strings.
// The resulting strings must maintain the same order as they were initially given.
 

// Example 1:

// Input: words = ["one.two.three","four.five","six"], separator = "."
// Output: ["one","two","three","four","five","six"]
// Explanation: In this example we split as follows:

// "one.two.three" splits into "one", "two", "three"
// "four.five" splits into "four", "five"
// "six" splits into "six" 

// Hence, the resulting array is ["one","two","three","four","five","six"].
// Example 2:

// Input: words = ["$easy$","$problem$"], separator = "$"
// Output: ["easy","problem"]
// Explanation: In this example we split as follows: 

// "$easy$" splits into "easy" (excluding empty strings)
// "$problem$" splits into "problem" (excluding empty strings)

// Hence, the resulting array is ["easy","problem"].

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        vector<string> final;
        for(int i=0; i<words.size(); i++){
            string s1;
            for(int j=0; j<words[i].length(); j++){
                if(words[i][j] != separator){
                s1.push_back(words[i][j]);
                }
                if(words[i][j] ==separator && !s1.empty()){

                 final.push_back(s1);
                 s1.clear();
                }
            }
            if(!s1.empty()){
                final.push_back(s1);
            }
            
        }
        return final;
    }
};