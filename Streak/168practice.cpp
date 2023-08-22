#include<iostream>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";  // Initialize an empty string to store the final column title
        
        // Continue looping as long as columnNumber is greater than 0
        while (columnNumber > 0) {
            int remainder = (columnNumber - 1) % 26;  // Calculate the remainder after subtracting 1 (0-based indexing)
            char letter = 'A' + remainder;  // Convert the remainder to its corresponding letter (A, B, ..., Z)
            result = letter + result;  // Add the letter to the beginning of the result string
            
            columnNumber = (columnNumber - 1) / 26;  // Update columnNumber for the next iteration
        }
        
        return result;  // Return the final column title
    }
};

int main (){
Solution sol;

cout<<sol.convertToTitle(13);

    return 0;
}