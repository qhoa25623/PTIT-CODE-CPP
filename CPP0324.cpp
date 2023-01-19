#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll powMod(ll a, ll b, ll m)
{
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
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
        ll b, m;
        cin >> b >> m;
        ll r = 0;
        for (auto x : a)
        {
            r = r * 10 + (x - '0');
            r %= m;
        }
        cout << powMod(r, b, m) << endl;
    }
    return 0;
}