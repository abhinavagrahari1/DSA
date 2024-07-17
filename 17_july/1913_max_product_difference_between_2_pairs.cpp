// 1913. Maximum Product Difference Between Two Pairs
// The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

// For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
// Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

// Return the maximum such product difference.

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int biggest{0}, secondBiggest{0};
        int smallest{INT_MAX}, secondSmallest{INT_MAX};

        for (int x : nums) {
            if (x < smallest) {
                secondSmallest = smallest;
                smallest = x;
            } else {
                secondSmallest = min(x, secondSmallest);
            }

            if (x > biggest) {
                secondBiggest = biggest;
                biggest = x;
            } else {
                secondBiggest = max(x, secondBiggest);
            }
        }
        return biggest*secondBiggest - secondSmallest*smallest;
    }
};