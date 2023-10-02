// Question link :- https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/?envType=daily-question&envId=2023-10-02
class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA = 0; // Count of consecutive 'A's
        int countB = 0; // Count of consecutive 'B's
        
        for (int i = 2; i < colors.size(); i++) {
            if (colors[i] == 'A' && colors[i - 1] == 'A' && colors[i - 2] == 'A') {
                countA++; // Increment countA for consecutive 'A's
            } else if (colors[i] == 'B' && colors[i - 1] == 'B' && colors[i - 2] == 'B') {
                countB++; // Increment countB for consecutive 'B's
            }
        }
        
        return countA > countB;
    }
};
/*
Complexity
Time complexity: O(n)
Space complexity: O(1).

Approach
1. Initialize two variables, countA and countB, to keep track of consecutive 'A's and 'B's, respectively. Initialize them to 0.

2. Iterate through the input string colors starting from the third character (index 2) because to have a winner, there must be at least three consecutive characters.

3. In each iteration of the loop, check if the current character, colors[i], is 'A' and if the two previous characters, colors[i - 1] and colors[i - 2], are also 'A'. If this condition is met, increment countA.

4. Similarly, check if the current character, colors[i], is 'B' and if the two previous characters, colors[i - 1] and colors[i - 2], are also 'B'. If this condition is met, increment countB.

5. After iterating through the entire string, compare countA and countB. If countA is greater than countB, return true, indicating that player 'A' wins. Otherwise, return false, indicating that player 'B' wins or it's a tie.
*/
