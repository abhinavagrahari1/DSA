// 2418. Sort the People

// You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

// For each index i, names[i] and heights[i] denote the name and height of the ith person.

// Return names sorted in descending order by the people's heights.

class Solution {
public:

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> m1;
        vector<string> n;

        for(int i=0; i<names.size(); i++){
            m1[heights[i]] = names[i];
        }

        for(auto i =m1.rbegin(); i !=m1.rend(); i++ ){
            n.push_back(i->second);
        }
        return n;
    }
};