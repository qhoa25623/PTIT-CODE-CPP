#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            auto x1 = lower_bound(a + i + 1, a + n, k - a[i]);
            auto x2 = upper_bound(a + i + 1, a + n, k - a[i]);
            x2--;
            cnt += (x2 - x1) + 1;
        }
        if (cnt == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << cnt << endl;
        }
    }
    return 0;
}