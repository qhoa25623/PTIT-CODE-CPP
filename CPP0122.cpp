#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

ll lcm(ll x, ll y)
{
    return x / gcd(x, y) * y;
}

ll solve(ll n)
{
    ll result = 1;
    for (ll i = 2; i <= n; i++)
    {
        result = lcm(result, i);
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll result = solve(n);
        cout << result << endl;
    }
    return 0;
}
