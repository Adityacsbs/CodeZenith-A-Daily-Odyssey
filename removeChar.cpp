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
        int a = s[i];
        if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}