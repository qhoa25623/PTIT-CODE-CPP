#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool ThuanNghich(ll n)
{
    ll tmp = n;
    ll tn = 0;
    while (n)
    {
        tn = tn * 10 + n % 10;
        n /= 10;
    }
    return tmp == tn;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (ThuanNghich(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}