#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        ll sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (mp[s[i]] > 1)
            {
                sum += (mp[s[i]] * (mp[s[i]] - 1) / 2);
                mp[s[i]] = 0;
            }
        }
        cout << sum + s.size() << endl;
    }
    return 0;
}