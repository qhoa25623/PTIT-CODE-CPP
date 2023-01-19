#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll legendre(int n, int p)
{
    ll ans = 0;
    for (int i = p; i <= n; i *= p)
    {
        ans += 1ll * n / i;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        cout << legendre(n, p) << endl;
    }
    return 0;
}