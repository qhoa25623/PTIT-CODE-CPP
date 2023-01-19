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
        int sum = 0;
        multiset<char> mset;
        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                sum += (s[i] - '0');
            }
            if (isalpha(s[i]))
            {
                mset.insert(s[i]);
            }
        }
        for (auto x : mset)
        {
            cout << x;
        }
        cout << sum << endl;
    }
    return 0;
}