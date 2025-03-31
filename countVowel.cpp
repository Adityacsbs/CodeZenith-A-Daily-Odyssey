// Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter String: ";
    getline(cin, s);
    int vowels = 0, consonants = 0, spaces = 0;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels++;
        }
        else if (s[i] == ' ')
        {
            spaces++;
        }
        else
        {
            consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}