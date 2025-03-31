#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1.length() != s2.length())
    {
        cout << "Not an anagram" << endl;
        return 0;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "Not an anagram" << endl;
            return 0;
        }
    }
    cout << "Anagram" << endl;

    return 0;
}