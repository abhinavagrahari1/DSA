// 1974. Minimum Time to Type Word Using Special Typewriter

// There is a special typewriter with lowercase English letters 'a' to 'z' arranged in a circle with a pointer. A character can only be typed if the pointer is pointing to that character. The pointer is initially pointing to the character 'a'.

// Each second, you may perform one of the following operations:

// Move the pointer one character counterclockwise or clockwise.
// Type the character the pointer is currently on.
// Given a string word, return the minimum number of seconds to type out the characters in word.

 

// Example 1:

// Input: word = "abc"
// Output: 5
// Explanation: 
// The characters are printed as follows:
// - Type the character 'a' in 1 second since the pointer is initially on 'a'.
// - Move the pointer clockwise to 'b' in 1 second.
// - Type the character 'b' in 1 second.
// - Move the pointer clockwise to 'c' in 1 second.
// - Type the character 'c' in 1 second.

class Solution {
public:
    int minTimeToType(string word) {
        int total =0;
        if(abs(word[0]-'a')  > 26-abs(word[0]-'a')){
            total = 26-abs(word[0]-'a')+1;
        }else{
            total= abs(word[0]-'a')+1;
        }
        for(int i=0; i<word.length()-1; i++){
            if (abs((word[i+1]-'a') - (word[i] - 'a')) > 26- abs((word[i+1]-'a') - (word[i] - 'a'))){
                total += 26- abs((word[i+1]-'a') - (word[i] - 'a'))+1;
            }else{
                total+= abs((word[i+1]-'a') - (word[i] - 'a')) +1;
            }
        }

        return total;
    }
};