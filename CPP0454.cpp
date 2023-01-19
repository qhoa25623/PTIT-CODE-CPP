#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(ll a[], int n)
{
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0, r = i - 1;
        while (l < r)
        {
            if (a[l] + a[r] == a[i])
                return 1;
            else if (a[l] + a[r] < a[i])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return 0;
}
int a[1000001];
ll b[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 1ll * a[i] * a[i];
        }
        sort(b, b + n);
        if (solve(b, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}