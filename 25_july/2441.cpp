// 2441. Largest Positive Integer That Exists With Its Negative
// Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

// Return the positive integer k. If there is no such integer, return -1.

 

// Example 1:

// Input: nums = [-1,2,-3,3]
// Output: 3
// Explanation: 3 is the only valid k we can find in the array.
// Example 2:

// Input: nums = [-1,10,6,7,-7,1]
// Output: 7
// Explanation: Both 1 and 7 have their corresponding negative values in the array. 7 has a larger value.
// Example 3:

// Input: nums = [-10,8,6,7,-2,-3]
// Output: -1
// Explanation: There is no a single valid k, we return -1.

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> freq;
        int curr_max = -1;

        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] ==nums[j]*-1){
                    if(abs(nums[i]) >curr_max){
                        curr_max = abs(nums[i]);
                    }
                }
            }
        }
        
        return curr_max;
    }
};