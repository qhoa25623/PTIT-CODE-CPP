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
        for (auto &x : a)
        {
            cin >> x;
        }
        map<int, int> mp;
        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            if (mp[a[i]] == 2)
            {
                ok = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if (!ok)
            cout << "-1\n";
    }
    return 0;
}