// 1588. Sum of All Odd Length Subarrays
// Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.

// A subarray is a contiguous subsequence of the array.

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int final_sum =0;
        for(int i=0; i<arr.size(); i++){
            vector<int> curr_subarr;
            int sum =0;
            for(int j=i; j<arr.size(); j++){
                sum+= arr[j];
                if((i+j)%2 ==0){
                    final_sum+=sum;
                }
            }
        }
        return final_sum;
    } 
};

 