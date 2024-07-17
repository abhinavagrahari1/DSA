//
// 1859. Sorting the Sentence
//  A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

// For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

 

// Example 1:

// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
// Example 2:

// Input: s = "Myself2 Me1 I4 and3"
// Output: "Me Myself and I"
// Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.

class Solution {
public:
    string sortSentence(string s) {
        map<int, string> mapped_data;
        int curr_beg = 0;
        for(int i=0; i<s.length(); i++){
            if((s[i] -'0')>=0 && (s[i] - '0')<=9){
                string curr_str = s.substr(curr_beg, i-curr_beg);
                mapped_data[s[i]- '0'] = curr_str;
                curr_beg = i+2;
            }
        }
       string final_string;
       for(auto x:mapped_data){
        final_string = final_string + x.second + " ";
       }

       final_string.pop_back();
       return final_string;
    }
};