#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter String: ";
    getline(cin, s);

    map<char, int> freq;

    // Count the frequency of each character
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue; // Skip spaces
        }
        freq[s[i]]++;
    }

    // Find non-repeating characters in the order of the input string
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 1)
        {
            ans += s[i];
            ans += ",";
        }
    }

    // Remove the trailing comma if there are non-repeating characters
    if (!ans.empty())
    {
        ans.pop_back();
    }

    cout << ans << endl;

    return 0;
}