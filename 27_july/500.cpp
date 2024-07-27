// 500. Keyboard Row
// Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

// In the American keyboard:

// the first row consists of the characters "qwertyuiop",
// the second row consists of the characters "asdfghjkl", and
// the third row consists of the characters "zxcvbnm".

 

// Example 1:

// Input: words = ["Hello","Alaska","Dad","Peace"]
// Output: ["Alaska","Dad"]
// Example 2:

// Input: words = ["omk"]
// Output: []
// Example 3:

// Input: words = ["adsdf","sfd"]
// Output: ["adsdf","sfd"]

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string first = "qwertyuiop";
        string FIRST ="QWERTYUIOP";
        string second = "asdfghjkl";
        string SECOND = "ASDFGHJKL";
        string third  = "zxcvbnm";
        string THIRD = "ZXCVBNM";
        vector<string> ans;

        for(int i=0; i<words.size(); i++){
            //check first
                bool check1=true, check2=true, check3=true;
            for(int j=0; j<words[i].length(); j++){ 


                int caps_check1 = FIRST.find(words[i][j]);
                int small_check1 = first.find(words[i][j]);
                if(caps_check1 == -1 && small_check1 == -1){
                    check1 = false;
                }

                int caps_check2= SECOND.find(words[i][j]);
                int small_check2 = second.find(words[i][j]);

                if(caps_check2== -1 && small_check2 == -1){
                    check2 = false;
                }

                int caps_check3= THIRD.find(words[i][j]);
                int small_check3 = third.find(words[i][j]);
                

                if(caps_check3 == -1 && small_check3 == -1){
                    check3 = false;
                }
            }
            if(check1==true || check2 ==true || check3 ==true){
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};