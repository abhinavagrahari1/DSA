// 1207. Unique Number of Occurrences

// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq;

        for(int i=0; i<arr.size();i++){
            freq[arr[i]]++;
        }
        set<int> f;
        for(auto& x: freq){
            f.insert(x.second);
        }
        return f.size() ==freq.size();
    }
};