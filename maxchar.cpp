#include <bits/stdc++.h>

using namespace std;

void findMaxFreqChar(const string &s)
{
    map<char, int> freq;

    // Count the frequency of each character
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    int maxfreq = 0;
    char maxchar = ' ';

    // Iterate through the string to ensure the first occurrence is prioritized
    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] > maxfreq) // if we use the >= operator then it will give the last character with max frequency
        {
            maxfreq = freq[s[i]];
            maxchar = s[i];
        }
    }

    cout << "Max frequency character is: " << maxchar << " with frequency: " << maxfreq << endl;
}

int main()
{

    string s;
    cout << "Enter String: ";
    getline(cin, s);

    findMaxFreqChar(s);
    map<char, int> freq;

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    int maxfreq = 0;
    char maxchar = ' ';
    for (auto &it : freq)
    {
        if (it.second >= maxfreq) // if we use the > operator then it will give the first character with max frequency
        {
            maxfreq = it.second;
            maxchar = it.first;
        }
    }
    cout << "Max frequency character is: " << maxchar << " with frequency: " << maxfreq << endl;
    return 0;
}