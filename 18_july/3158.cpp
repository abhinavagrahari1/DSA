// 3158. Find the XOR of Numbers Which Appear Twice

// You are given an array nums, where each number in the array appears either once or twice.

// Return the bitwise XOR of all the numbers that appear twice in the array, or 0 if no number appears twice.

 

// Example 1:

// Input: nums = [1,2,1,3]

// Output: 1

// Explanation:

// The only number that appears twice in nums is 1.

// Example 2:

// Input: nums = [1,2,3]

// Output: 0

// Explanation:

// No number appears twice in nums.

// Example 3:

// Input: nums = [1,2,2,1]

// Output: 3

// Explanation:

// Numbers 1 and 2 appeared twice. 1 XOR 2 == 3.

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map <int, int> m1;
        int res=0;

        for( auto& x: nums){
            m1[x]++;
        }

        for( auto& x: m1){
            if(x.second == 2){
                res ^= x.first;
            }
        }
        return res;
    }
};