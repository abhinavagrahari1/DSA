// 3019. Number of Changing Keys

// You are given a 0-indexed string s typed by a user. Changing a key is defined as using a key different from the last used key. For example, s = "ab" has a change of a key while s = "bBBb" does not have any.

// Return the number of times the user had to change the key.

// Note: Modifiers like shift or caps lock won't be counted in changing the key that is if a user typed the letter 'a' and then the letter 'A' then it will not be considered as a changing of key.

class Solution {
public:
    int countKeyChanges(string s) {
        int counter = 0;
        
        for(int i=0; i<s.length()-1; i++){
            if(abs(s[i]-s[i+1]) != 0 && abs(s[i]- s[i+1]) != 32){
              counter++;  
            }
        }
        return counter;
    }
};