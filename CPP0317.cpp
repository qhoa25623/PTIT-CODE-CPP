#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool tn(string s)
{
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        ++l;
        --r;
    }
    return true;
}

bool chan(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8')
            return false;
    }
    return true;
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
        cin >> s;
        if (tn(s) && chan(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}