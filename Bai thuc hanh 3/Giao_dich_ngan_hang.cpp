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
        cin.ignore();
        string s;
        getline(cin, s);
        int gd;
        cin >> gd;
        ll res = 0;
        ll tien;
        for (int i = 0; i < gd; i++)
        {
            cin >> tien;
            if (tien < 0)
            {
                res += abs(tien);
            }
        }
        if (res >= 100000000)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}