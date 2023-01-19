#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll powMod(int x, int y, int p)
{
    ll res = 1;
    x %= p;
    for (int i = 1; i <= y; i++)
    {
        res *= 1ll * x;
        res %= p;
    }
    return res % p;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, p;
        cin >> x >> y >> p;
        cout << powMod(x, y, p) << endl;
    }
    return 0;
}