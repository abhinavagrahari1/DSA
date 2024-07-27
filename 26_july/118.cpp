// 118. Pascal's Triangle

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]
 

 class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int k=2;
        vector<vector<int>> ans;
        vector<int> prev_vector(1,1);
        ans.push_back(prev_vector);
        while(k<=numRows){
            vector<int> curr_vector;
            curr_vector.push_back(1);
            for(int i=0;i<prev_vector.size()-1; i++){
                int j = prev_vector[i]+prev_vector[i+1];
                curr_vector.push_back(j);
            }
            curr_vector.push_back(1);
            ans.push_back(curr_vector);
            prev_vector = curr_vector;
            k++;
        }
        return ans;
    }
};