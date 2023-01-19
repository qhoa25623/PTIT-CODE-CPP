#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll n)
{
    int tmp = n % 10;
    n /= 10;
    while (n)
    {
        int x = n % 10;
        if (abs(x - tmp) != 1)
            return false;
        n /= 10;
        tmp = x;
    }
    return true;
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
        if (check(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}