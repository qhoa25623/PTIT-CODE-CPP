#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto x : s)
        {
            mp[x]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (mp[s[i]] != 0)
            {
                cout << s[i] << mp[s[i]];
                mp[s[i]] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}