// 1768. Merge Strings Alternately
// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.   

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size =0;
        string left;
        if(word1.length()>=word2.length()){
            size = word2.size();
            left.append(word1, size, word1.size()-size);
        }else{
            size= word1.size();
            left.append(word2,size, word2.size()-size);
        }
        
        string ans;
        for(int i=0; i<size; i++ ){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        ans.append(left);
        return ans;
    }
};