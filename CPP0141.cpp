#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool Fib(ll n)
{
    if (n == 0 || n == 1)
        return true;
    ll f0 = 0, f1 = 1;
    for (int i = 3; i <= 93; i++)
    {
        ll fn = f0 + f1;
        if (fn == n)
        {
            return true;
        }
        f0 = f1;
        f1 = fn;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (Fib(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}