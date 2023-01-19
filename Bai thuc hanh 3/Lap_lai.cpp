#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[1000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = 0;
        for (auto x : mp)
        {
            if (x.second >= 2)
            {
                ans += x.second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}