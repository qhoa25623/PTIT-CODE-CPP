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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        map<char, int> mp;
        char max;
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
            if (mp[s[i]] > dem)
            {
                max = s[i];
                dem = mp[s[i]];
            }
        }
        if (mp[max] - 1 > s.length() - mp[max])
        {
            cout << 0 << endl;
        }
        else
            cout << 1 << endl;
    }
    return 0;
}