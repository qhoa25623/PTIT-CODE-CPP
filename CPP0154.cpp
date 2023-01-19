#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool result(int n, ll k)
{
    ll result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i % k;
    }
    return result == k;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        cout << result(n, k) << endl;
    }
    return 0;
}