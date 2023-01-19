#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[505][505];
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int j = 0; j < n; j++)
        {
            mp[a[0][j]] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[a[i][j]] == i)
                {
                    mp[a[i][j]]++;
                }
            }
        }
        int ans = 0;
        for (auto x : mp)
        {
            if (x.second == n)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}