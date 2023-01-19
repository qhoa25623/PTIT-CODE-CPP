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
        int a[n + 1];
        int ok = 1;
        for (int i = 1; i <= n; i++)
        {
            a[i] = 0;
        }
        while (ok)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
            int i = n;
            while (n >= 1 && a[i] == 1)
            {
                a[i] = 0;
                --i;
            }
            if (i == 0)
            {
                ok = 0;
            }
            else
            {
                a[i] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}