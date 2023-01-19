#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool prime(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 2;
}

bool tang(ll n)
{
    ll res = n;
    int n1 = n % 10;
    n /= 10;
    while (n > 0)
    {
        int n2 = n % 10;
        if (n1 <= n2)
            return false;
        n /= 10;
        n1 = n2;
    }
    return prime(res);
}

bool giam(ll n)
{
    ll res = n;
    int n1 = n % 10;
    n /= 10;
    while (n > 0)
    {
        int n2 = n % 10;
        if (n1 >= n2)
            return false;
        n /= 10;
        n1 = n2;
    }
    return prime(res);
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
        int n;
        cin >> n;
        ll cnt = 0;
        for (ll i = pow(10, n - 1); i <= pow(10, n) - 1; i++)
        {
            if (giam(i) || tang(i))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}