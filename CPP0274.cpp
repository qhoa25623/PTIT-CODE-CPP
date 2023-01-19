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
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (auto &x : a)
        {
            cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        for (auto x : mp)
        {
            if (x.second >= 2)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}