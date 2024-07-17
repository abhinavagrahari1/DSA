// 2697. Lexicographically Smallest Palindrome
// You are given a string s consisting of lowercase English letters, and you are allowed to perform operations on it. In one operation, you can replace a character in s with another lowercase English letter.

// Your task is to make s a palindrome with the minimum number of operations possible. If there are multiple palindromes that can be made using the minimum number of operations, make the lexicographically smallest one.

// A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, string a has a letter that appears earlier in the alphabet than the corresponding letter in b.

// Return the resulting palindrome string.

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        // string s1= s.substr(0, s.length()/2);
        // int mid = s.length()/2;
        // string s2;
        // if(s.length()%2 == 0){
        //     s2 = s.substr(mid, mid);

        // }else{
        //     s2 = s.substr(mid+1, mid);
        // }

        // for(int i=0; i<s1.length(); i++){
        //     if(s1[i]< s2[s1.length()-1 -i]){
        //         s2[s1.length()-1 -i] =s1[i];
        //     }else if(s1[i]> s2[s1.length()-1-i]){
        //         s1[i]=s2[s1.length()-1-i];
        //     }
        // }
        // string final;

        // if(s.length()%2==0){
        //     final.append(s1);
        //     final.append(s2);
        // }else{
        //     final.append(s1);
        //     final.push_back(s[mid]);
        //     final.append(s2);
        // }
        // return final;

        for(int i=0, j=s.size()-1; i<=j; i++, j--){
            if(s[i]-s[j]>0){
                s[i]=s[j];
            }
            if(s[i]-s[j]<0){
                s[j]=s[i];
            }
        }
        return s;

        
    }
};