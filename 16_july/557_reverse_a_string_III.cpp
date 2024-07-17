/*

557. Reverse Words in a String III
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"
*/


class Solution {
public:
    string reverseWords(string s) {
        int curr_beg_index =0;
        int curr_end_index= s.find(' ');

        for(int i= 0; i<s.length(); i++){
            if(s[i]==' '){
                curr_end_index = i;
                reverse(s.begin()+curr_beg_index, s.begin()+curr_end_index);
                curr_beg_index = i+1;
            }
        }
        reverse(s.begin()+ curr_beg_index, s.end());

        return s;
        
    }
};