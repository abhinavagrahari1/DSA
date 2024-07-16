/*

1832	Check if the Sentence Is Pangram

A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false


*/



class Solution {
public:
    bool checkIfPangram(string sentence) {

        //using array...


        // int arr[26] = {0};
        //  for(int i=0; i< sentence.length();  i++){
        //     arr[sentence[i]-'a']++;
        //  }

        //  for(int i=0; i<26;i++){
        //     if(arr[i] == 0){
        //         return false;
        //     }
        //  }
        //  return true;

        //using set...

        // set<char>s;

        // for(int i=0; i< sentence.size(); i++){
        //     s.insert(sentence[i]);
        // }
        // return s.size()== 26;

        //using unordered_set

        unordered_set<char> st;

        for(auto x:sentence){
            st.insert(x);
        }
        return st.size()==26;

    }
};