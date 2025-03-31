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
        if (s[i] == '(' || s[i] == ')')
        {
            continue;
        }
        else
        {
            ans += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}