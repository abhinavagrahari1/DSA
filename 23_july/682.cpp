// 682. Baseball Game

// You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

// You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

// An integer x.
// Record a new score of x.
// '+'.
// Record a new score that is the sum of the previous two scores.
// 'D'.
// Record a new score that is the double of the previous score.
// 'C'.
// Invalidate the previous score, removing it from the record.
// Return the sum of all the scores on the record after applying all the operations.

// The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.

 

// Example 1:

// Input: ops = ["5","2","C","D","+"]
// Output: 30
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "2" - Add 2 to the record, record is now [5, 2].
// "C" - Invalidate and remove the previous score, record is now [5].
// "D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
// "+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
// The total sum is 5 + 10 + 15 = 30.

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> curr_arr;
        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "+"){
                curr_arr.push_back(curr_arr[curr_arr.size()-1] + curr_arr[curr_arr.size()-2]);
            }else if(operations[i] == "D"){
                curr_arr.push_back(curr_arr[curr_arr.size()-1]*2);
            }else if(operations[i] == "C"){
               curr_arr.pop_back(); 
            }else{
                curr_arr.push_back(stoi(operations[i]));
            }
        }
        int sum=0;

        for(int i=0; i<curr_arr.size(); i++){
            sum+=curr_arr[i];
        }
        return sum;
    }
};