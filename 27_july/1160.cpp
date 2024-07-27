// 1160. Find Words That Can Be Formed by Characters
// You are given an array of strings words and a string chars.

// A string is good if it can be formed by characters from chars (each character can only be used once).

// Return the sum of lengths of all good strings in words.

 

// Example 1:

// Input: words = ["cat","bt","hat","tree"], chars = "atach"
// Output: 6
// Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
// Example 2:

// Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
// Output: 10
// Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        map<char, int> freq_chars;
        for(int i=0; i<chars.length(); i++){
            freq_chars[chars[i]]++;
        }

        for(int i=0; i<words.size(); i++){
            map<char, int> m;
            bool check= true;
            for(int j=0; j<words[i].length(); j++){
                m[words[i][j]]++;
            }
            

            for(auto& x: m){
                if(freq_chars.find(x.first) != freq_chars.end()){
                   if(x.second > freq_chars[x.first] ){
                    check=false;
                    break;
                   }
                }else{
                     check = false;
                    break;
                }

            }

            if(check == true){
                ans+= words[i].length();
            }
        }

        return ans;
    }
};