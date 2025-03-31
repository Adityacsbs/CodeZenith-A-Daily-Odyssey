#include <bits/stdc++.h>

using namespace std;

// Function to remove spaces from the given string and print the result
void removeSpace(string s)
{
    string anss = "";

    // Iterate through each character in the string
    for (int i = 0; i < s.length(); i++)
    {
        // Skip spaces
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            // Append non-space characters to the result
            anss += s[i];
        }
    }
    // Print the string without spaces
    cout << anss << endl;
}

int main()
{

    string s;
    cout << "Enter String: ";
    getline(cin, s);
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            continue;
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
    removeSpace(ans);

    return 0;
}