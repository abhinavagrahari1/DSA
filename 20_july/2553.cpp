// 2553. Separate the Digits in an Array

// Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

// To separate the digits of an integer is to get all the digits it has in the same order.

// For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].
 

// Example 1:

// Input: nums = [13,25,83,77]
// Output: [1,3,2,5,8,3,7,7]
// Explanation: 
// - The separation of 13 is [1,3].
// - The separation of 25 is [2,5].
// - The separation of 83 is [8,3].
// - The separation of 77 is [7,7].
// answer = [1,3,2,5,8,3,7,7]. Note that answer contains the separations in the same order.
// Example 2:

// Input: nums = [7,1,3,9]
// Output: [7,1,3,9]
// Explanation: The se

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> final;
        for(int i=0; i<nums.size(); i++){
            vector<int> local;
            while(nums[i]>0){
                int rem = nums[i]%10;
                local.push_back(rem);
                nums[i]= nums[i]/10;
            }
            for(int k=local.size()-1; k>=0; k--){
                final.push_back(local[k]);
            }
        }
        return final;
    }
};