#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string s)
{

    int n = s.length();

    for (int i = 0; i < n / 2; i++)
    {

        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool palin(int i, string &s)
{

    if (i >= s.length() / 2)
        return true;

    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }

    return palin(i + 1, s);
}

int main()
{
    string s;
    cin >> s;

    if (ispalindrome(s) == true)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    if (palin(0, s) == true)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}