#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(const std::vector<std::string>& words, char x) {
        int a = words.size();
        std::vector<int> ans;

        for (int i = 0; i < a; i++) {
            int b = words[i].size();
            bool containsX = false;

            for (int j = 0; j < b; j++) {
                if (words[i][j] == x) {
                    containsX = true;
                    break;
                }
            }

            if (containsX) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
