#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll modulo(string a, ll b, ll c)
{
    ll res = 0;
    for (auto x : a)
    {
        res = res * 10 + b * (x - '0');
        res %= c;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        ll b, c;
        cin >> b >> c;
        cout << modulo(a, b, c) << endl;
    }
    return 0;
}