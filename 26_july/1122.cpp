// 1122. Relative Sort Array
// Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

// Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.

 

// Example 1:

// Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
// Output: [2,2,2,1,4,3,3,9,6,7,19]
// Example 2:

// Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
// Output: [22,28,8,6,17,44]

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> arr1_freq;
        vector<int> ans;
        for(int i=0; i<arr1.size(); i++){
            arr1_freq[arr1[i]]++;
        }

        for(int i=0; i<arr2.size(); i++){
            auto it = arr1_freq.find(arr2[i]);
            if (it != arr1_freq.end()){
                for(int j=0; j<it->second; j++){
                ans.push_back(it->first);
            }
            arr1_freq.erase(it);
            }
            
        }
       
        for(auto& x: arr1_freq){
            for(int j=0;j<x.second;j++){
                ans.push_back(x.first);
            }
            
        }
        return ans;


    }
};