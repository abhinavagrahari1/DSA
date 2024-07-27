// 3079. Find the Sum of Encrypted Integers

// You are given an integer array nums containing positive integers. We define a function encrypt such that encrypt(x) replaces every digit in x with the largest digit in x. For example, encrypt(523) = 555 and encrypt(213) = 333.

// Return the sum of encrypted elements.

 

// Example 1:

// Input: nums = [1,2,3]

// Output: 6

// Explanation: The encrypted elements are [1,2,3]. The sum of encrypted elements is 1 + 2 + 3 == 6.

// Example 2:

// Input: nums = [10,21,31]

// Output: 66

// Explanation: The encrypted elements are [11,22,33]. The sum of encrypted elements is 11 + 22 + 33 == 66.

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            int curr_max = 0;
            int curr_digit = 0;
            while(nums[i]>0){
                int rem = nums[i]%10;
                curr_max = max(rem,curr_max);
                curr_digit++;
                nums[i] =nums[i]/10;
            }
            int num=0;
            for(int k=0; k<curr_digit; k++){
                num = num*10+curr_max;
            }
            ans+=num;
        }
        return ans;
    }
};