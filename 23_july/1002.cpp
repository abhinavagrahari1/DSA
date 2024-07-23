// 1002. Find Common Characters

// Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 

// Example 1:

// Input: words = ["bella","label","roller"]
// Output: ["e","l","l"]
// Example 2:

// Input: words = ["cool","lock","cook"]
// Output: ["c","o"]

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string s = words[0];
        set<string> final;
            for(int j=0; j<s.length(); j++){
                bool b = true;
                for(auto& x: words){
                    if(x.find(s[j]) == -1){
                        b= false;
                        break;
                    }
                }
                if(b==true){
                    string t(1,s[j]);
                    final.insert(t);
                }
                
            }
            vector<string> f;
            for(auto& x: final){
                f.push_back(x);
            }
            return f;
            
    }
};