#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void ptich(ll n)
{
    ll res = 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            if (i > res)
            {
                res = i;
            }
        }
    }
    if (n != 1)
    {
        res = n;
    }
    cout << res;
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
        ptich(n);
        cout << endl;
    }
    return 0;
}