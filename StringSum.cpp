#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter String: ";

    getline(cin, s);
    int ans = 0;
    int anss = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int a = s[i] - '0';
            ans += a;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            anss += s[i] - '0';
        }
    }
    cout << ans << endl;
    cout << anss << endl;
    return 0;
}