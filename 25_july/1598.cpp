1598. Crawler Log Folder

// The Leetcode file system keeps a log each time some user performs a change folder operation.

// The operations are described below:

// "../" : Move to the parent folder of the current folder. (If you are already in the main folder, remain in the same folder).
// "./" : Remain in the same folder.
// "x/" : Move to the child folder named x (This folder is guaranteed to always exist).
// You are given a list of strings logs where logs[i] is the operation performed by the user at the ith step.

// The file system starts in the main folder, then the operations in logs are performed.

// Return the minimum number of operations needed to go back to the main folder after the change folder operations.

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int counter=0;
        for(int i=0; i<logs.size(); i++){
            int size = logs[i].length();
            if(logs[i][size-2] == '.'){
                if(size-3 >=0 && logs[i][size-3] == '.'){
                    counter--;
                    if(counter <0){
                        counter =0;
                    }
                }
            }else{
                counter++;
            }
        }
        return counter;
    }
};