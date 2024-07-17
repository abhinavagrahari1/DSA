// 2535. Difference Between Element Sum and Digit Sum of an Array

// You are given a positive integer array nums.

// The element sum is the sum of all the elements in nums.
// The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
// Return the absolute difference between the element sum and digit sum of nums.

// Note that the absolute difference between two integers x and y is defined as |x - y|.

class Solution {
public:
    int sumBreakdown(int number){
            int sum=0;
            while(number>0){
                sum = sum + number%10;
                number = number/10;
            }
            return sum;
        }
    
    int differenceOfSum(vector<int>& nums) {
        int normal_sum=0;
        int elemental_sum =0;

        for(int i=0; i<nums.size(); i++){
            normal_sum +=  nums[i];
            elemental_sum += sumBreakdown(nums[i]);
        }

        return abs(normal_sum - elemental_sum); 
    }
};