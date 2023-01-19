#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    ll fib0 = 0, fib1 = 1;
    for (int i = 2; i <= 92; i++)
    {
        ll fib = fib0 + fib1;
        if (fib == n)
        {
            return true;
        }
        fib0 = fib1;
        fib1 = fib;
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
        if (fibo(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}