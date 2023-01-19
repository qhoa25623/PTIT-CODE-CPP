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
        int n, x;
        cin >> n >> x;
        int a[n];
        map<int, int> mp;
        for (auto &x : a)
        {
            cin >> x;
            mp[x]++;
        }
        if (mp[x] >= 1)
            cout << mp[x] << endl;
        else
            cout << "-1\n";
    }
    return 0;
}