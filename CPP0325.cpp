#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--)
    {
        string s;
        getline(cin, s);
        int odd = 0, even = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                even += (s[i] - '0');
            }
            else
            {
                odd += (s[i] - '0');
            }
        }
        if (abs(odd - even) % 11 == 0)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}