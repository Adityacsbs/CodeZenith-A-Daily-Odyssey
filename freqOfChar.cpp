#include <bits/stdc++.h>

using namespace std;

void count(string s)
{

    sort(s.begin(), s.end());
    char ch = s[0];
    int count = 1;

    for (int i = 1; i < s.length(); i++)
    {

        if (ch == s[i])
        {
            count++;
        }
        else if (ch != s[i])
        {
            cout << ch << count << ",";
            ch = s[i];
            count = 1;
        }
    }
    cout << ch << count << endl;
}

int main()
{

    string s;
    cout << "Enter String: ";
    getline(cin, s);

    count(s);

    map<char, int> freq;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        freq[s[i]]++;
    }

    for (auto &it : freq)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}