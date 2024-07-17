// 2956. Find Common Elements Between Two Arrays

// You are given two integer arrays nums1 and nums2 of sizes n and m, respectively. Calculate the following values:

// answer1 : the number of indices i such that nums1[i] exists in nums2.
// answer2 : the number of indices i such that nums2[i] exists in nums1.
// Return [answer1,answer2].


class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int counter =0;
        vector<int> final;
     for(int i=0; i<nums1.size(); i++){
        for(int j=0; j <nums2.size(); j++){
            if(nums1[i] == nums2[j]){
                counter++;
                break;
            }
        }
     }

     final.push_back(counter);
     counter =0;

     for(int i=0; i<nums2.size(); i++){
        for(int j=0; j <nums1.size(); j++){
            if(nums2[i] == nums1[j]){
                counter++;
                break;
            }
        }
     }

     final.push_back(counter);
     return final;
    }
};