// 2367. Number of Arithmetic Triplets

// You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

// i < j < k,
// nums[j] - nums[i] == diff, and
// nums[k] - nums[j] == diff.
// Return the number of unique arithmetic triplets.

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int finalCounter =0;
        for(int i=0; i<nums.size(); i++){
            int counter=0; diff=diff;
            for(int j=i+1;j<nums.size(); j++){
                if((nums[j] - nums[i]) == diff || (nums[j]-nums[i]) == diff*2){
                    counter++;
                    if(counter==2){
                        finalCounter++;
                    }
                }
            }
        }

        return finalCounter;
    }
};