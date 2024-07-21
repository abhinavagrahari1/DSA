// 2215. Find the Difference of Two Arrays

// Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

// answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
// answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
// Note that the integers in the lists may be returned in any order.

 

// Example 1:

// Input: nums1 = [1,2,3], nums2 = [2,4,6]
// Output: [[1,3],[4,6]]
// Explanation:
// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].
// Example 2:

// Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
// Output: [[3],[]]
// Explanation:
// For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
// Every integer in nums2 is present in nums1. Therefore, answer[1] = [].
 

 class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> final;
        set<int> v1;
        set<int> v2;
        vector<int> vec1;
        vector<int> vec2;
        for(int i=0; i< nums1.size(); i++){
            bool flag =false;
            for(int j=0 ; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    flag =true;
                }
            }
            if(flag ==false){
                v1.insert(nums1[i]);
            }
        }
        for(auto& x: v1){
            vec1.push_back(x);
        }

        final.push_back(vec1);

        for(int i=0; i< nums2.size(); i++){
            bool flag =false;
            for(int j=0 ; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    flag =true;
                }
            }
            if(flag ==false){
                v2.insert(nums2[i]);
            }
        }
        for(auto& y: v2){
            vec2.push_back(y);
        }

        final.push_back(vec2);

        return final;
    }
};