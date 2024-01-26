#include <string>
#include <vector>

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        int n = indices.size();
        string ans(n, ' ');  // Initialize ans with n spaces

        for(int i = 0; i < n; i++){
            int a = indices[i];
            char m = s[i];
            ans[a] = m;
        }
        return ans;
    }
};
