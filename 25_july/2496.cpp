// 2496. Maximum Value of a String in an Array

// The value of an alphanumeric string can be defined as:

// The numeric representation of the string in base 10, if it comprises of digits only.
// The length of the string, otherwise.
// Given an array strs of alphanumeric strings, return the maximum value of any string in strs.

 

// Example 1:

// Input: strs = ["alic3","bob","3","4","00000"]
// Output: 5
// Explanation: 
// - "alic3" consists of both letters and digits, so its value is its length, i.e. 5.
// - "bob" consists only of letters, so its value is also its length, i.e. 3.
// - "3" consists only of digits, so its value is its numeric equivalent, i.e. 3.
// - "4" also consists only of digits, so its value is 4.
// - "00000" consists only of digits, so its value is 0.
// Hence, the maximum value is 5, of "alic3".
// Example 2:

// Input: strs = ["1","01","001","0001"]
// Output: 1
// Explanation: 
// Each string in the array has value 1. Hence, we return 1.

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max=0;
        for(int i=0;i<strs.size(); i++){
            bool isAlpha = false;
            for(int j=0; j<strs[i].length(); j++){
                if(strs[i][j] -'0' <0 || strs[i][j] -'0' >9){
                    isAlpha = true;
                }
            }
            int curr_max=0;
            if(isAlpha == true){
                curr_max = strs[i].length();
                if(curr_max> max){
                    max=curr_max;
                }
            }else{
                for(int k=0; k<strs[i].length(); k++){
                    curr_max =curr_max*10 + strs[i][k]-'0';
                }
                if(curr_max> max){
                    max=curr_max;
                }   
            }
        }
        return max;
    }
};