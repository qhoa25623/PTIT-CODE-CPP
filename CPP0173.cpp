#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
ll lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
ll solve(int x, int y, int z, ll n)
{
    ll tmp = lcm(lcm(x, y), z);
    ll m = (ll)pow(10, n - 1);
    ll min = (m + tmp - 1) / tmp * tmp;
    if (min < pow(10, n))
        return min;
    else
        return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        ll n;
        cin >> x >> y >> z >> n;
        ll result = solve(x, y, z, n);
        cout << result << endl;
    }
    return 0;
}