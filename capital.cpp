#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter String: ";
    getline(cin, s);
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i] - 32;
        }
        else if (i == s.length() - 1 && s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i] - 32;
        }
        else if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i] - 32;
        }
        else if (s[i + 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i] - 32;
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans << endl;

    return 0;
}