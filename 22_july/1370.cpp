// 1370. Increasing Decreasing String

// You are given a string s. Reorder the string using the following algorithm:

// Pick the smallest character from s and append it to the result.
// Pick the smallest character from s which is greater than the last appended character to the result and append it.
// Repeat step 2 until you cannot pick more characters.
// Pick the largest character from s and append it to the result.
// Pick the largest character from s which is smaller than the last appended character to the result and append it.
// Repeat step 5 until you cannot pick more characters.
// Repeat the steps from 1 to 6 until you pick all characters from s.
// In each step, If the smallest or the largest character appears more than once you can choose any occurrence and append it to the result.

// Return the result string after sorting s with this algorithm.

class Solution {
public:
    string sortString(string s) {
        map<char, int> m1;

        for(int i=0; i<s.length(); i++){
            m1[s[i]]++;
        }

    string f;


    int n = s.length();
    while(f.length() <n){
        for(auto& x: m1){
            if(x.second >0){
                f.push_back(x.first);
                x.second--;
                }
            }

        if(f.length() == n){
            break;
        }

        string temp;
        for(auto& y: m1){
            if(y.second>0){
                temp.push_back(y.first);
                y.second--;
            }
        }

        reverse(temp.begin(), temp.end());
        f.append(temp);
    }
    return f;
    }
};