#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9 + 7;
int a[1000001];

ll powMod(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
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
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int y = n - 1;
        ll P = 0;
        for (int i = 0; i < n; i++)
        {
            P = P + 1ll * a[i] * powMod(x, y);
            P %= mod;
            y--;
        }
        cout << P << endl;
    }
    return 0;
}