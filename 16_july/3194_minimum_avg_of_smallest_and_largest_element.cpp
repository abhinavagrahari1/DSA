// 3194. Minimum Average of Smallest and Largest Elements
// You have an array of floating point numbers averages which is initially empty. You are given an array nums of n integers where n is even.

// You repeat the following procedure n / 2 times:

// Remove the smallest element, minElement, and the largest element maxElement, from nums.
// Add (minElement + maxElement) / 2 to averages.
// Return the minimum element in averages.

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        float min = FLT_MAX;
        for(int i=0; i<nums.size()/2; i++){
            float avg = (nums[i]+nums[nums.size() -i -1])/2.0;
            cout<<avg<<endl;
            if(avg < min){
                min = avg;
            }
        }
        return min;
    }
};