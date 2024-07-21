// 1812. Determine Color of a Chessboard Square

// Return true if the square is white, and false if the square is black.

// The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.

 

// Example 1:

// Input: coordinates = "a1"
// Output: false
// Explanation: From the chessboard above, the square with coordinates "a1" is black, so return false.
// Example 2:

// Input: coordinates = "h3"
// Output: true
// Explanation: From the chessboard above, the square with coordinates "h3" is white, so return true.
// Example 3:

// Input: coordinates = 

class Solution {
public:
    bool squareIsWhite(string coordinates) {
     int f = (coordinates[0] -'a') +1;
     int s =coordinates[1] -'0';
     bool final;


     if((f%2 ==0 && s%2==0) || (f%2 !=0 && s%2!=0)){
        final = false;
     }else if((f%2 == 0 && s%2!=0) || (f%2 !=0 && s%2==0)){
        final = true;
     }
     return final;
    }
};