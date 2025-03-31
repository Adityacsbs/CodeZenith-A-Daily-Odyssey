#include <bits/stdc++.h>

using namespace std;

void removeSpace(string s)
{
    string anss = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            anss += s[i];
        }
    }
    cout << anss << endl;
}

void dupli(string s)
{
    map<char, int> mo;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        mo[s[i]]++;
    }

    string ans = "";

    for (auto &it : mo)
    {
        if (it.second > 1)
        {
            ans += it.first;
            cout << it.first << "->" << it.second << endl;
        }
    }
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (mo[s[i]] > 1)
    //     {
    //         ans += s[i];
    //     }
    // }
    cout << ans << endl;
}

int main()
{

    string s;
    cout << "Enter String: ";
    getline(cin, s);
    dupli(s);
    removeSpace(s);
    map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            freq[s[i]]++;
        }
    }
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 1)
        {
            ans += s[i];
        }
    }
    // for (auto &it : freq)
    // {
    //     if (it.second == 1)
    //     {
    //         ans += it.first;
    //     }
    // }

    cout << ans << endl;
    return 0;
}