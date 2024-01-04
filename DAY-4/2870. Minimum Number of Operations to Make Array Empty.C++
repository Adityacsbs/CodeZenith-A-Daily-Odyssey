#include <map>
#include <vector>

class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        // Use a map to store the count of each element
        map<int, int> count;

        // Count occurrences of each element in the array
        for (int element : nums) {
            count[element]++;
        }

        int ans = 0;
        for (auto pair : count) {
            if (pair.second == 1) {
                return -1;
            }
            ans = ans + (pair.second + 2) / 3;
        }

        return ans;
    }
};

