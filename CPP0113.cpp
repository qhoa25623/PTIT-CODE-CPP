#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll n)
{
    string s = to_string(n);
    char s1 = s[s.size() - 2];
    char s2 = s[s.size() - 1];
    if (s1 == '8' && s2 == '6')
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
        ll n;
        cin >> n;
        if (check(n))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}