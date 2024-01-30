class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        int i = 0;
        int j = i + 1;
        string ans = "";

        while (i < n - 1 && j < n) {
            if (command[i] == 'G') {
                ans += 'G';
                i++;
                j++;
            } else if (command[i] == '(' && command[j] == ')') {
                ans += 'o';
                i++;
                j++;
            } else if (command[i] == '(' && command[j] == 'a') {
                ans += "al";
                i++;
                j++;
            } else {
                i++;
                j++;
            }
        }

        if (i == n - 1 && command[i] == 'G') {
            ans += 'G';
        }

        return ans;
    }
};
