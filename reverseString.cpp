#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "Enter String: ";
    getline(cin, s);

    int n = s.length();
    string ans = "";

    for (int i = n - 1; i >= 0; i--)
    {
        ans += s[i];
    }
    cout << ans << endl;
    return 0;
}