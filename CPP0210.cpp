#include <bits/stdc++.h>
using namespace std;

int a[1000001];
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
        }
        int ok = 0, res = INT_MIN;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    res = max(a[j] - a[i], res);
                    ok = 1;
                }
            }
        }
        if (ok)
            cout << res << endl;
        else
            cout << "-1\n";
    }
    return 0;
}