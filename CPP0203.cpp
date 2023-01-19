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
        set<int> se;
        for (auto &x : a)
        {
            cin >> x;
            if (x > 0)
                se.insert(x);
        }
        int idx = 1;
        int ok = 0;
        for (auto x : se)
        {
            if (x != idx)
            {
                ok = 1;
                cout << idx << endl;
                break;
            }
            idx++;
        }
        if (ok == 0)
            cout << idx << endl;
    }
    return 0;
}