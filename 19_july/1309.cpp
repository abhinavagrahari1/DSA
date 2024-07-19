// 1309. Decrypt String from Alphabet to Integer Mapping

// You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:

// Characters ('a' to 'i') are represented by ('1' to '9') respectively.
// Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
// Return the string formed after mapping.

// The test cases are generated so that a unique mapping will always exist.

class Solution {
public:
    string freqAlphabets(string s) {
        string v;
        for(int i=0; i<s.length(); i++){
            if(i+2< s.length() && s[i+2] == '#'){
                int k = ((s[i]-'0')*10) + (s[i+1]-'0');
                v.push_back(char(96+k));
                i=i+2;
            }else{
                v.push_back(char(s[i]-'0' + 96));
            }
        }

        return v;
    }
};