#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s)
{
    map<char, int> mp;
    int pos = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            return false;
        if (isdigit(s[i]) || isalpha(s[i]) || s[i] == '.' || s[i] == '_')
        {
            mp[s[i]]++;
        }
        if (s[i] == '@')
        {
            pos = i;
        }
    }
    if (mp['@'] > 1)
        return false;

    if (pos - 1 >= 64)
        return false;

    if (s.size() - (pos + 1) + 1 >= 255)
        return false;
    int ok = 0;
    for (int i = pos + 1; i < s.size() - 1; i++)
    {
        if (s[i] == '.' && isdigit(s[i + 1]))
        {
            ok = 1;
            break;
        }
    }
    if (ok)
        return true;
    else
        return false;
}
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
        getline(cin, s);
        if (check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}