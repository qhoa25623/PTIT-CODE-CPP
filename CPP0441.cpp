#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos = 0, ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                pos = i;
                ok = 1;
                break;
            }
        }
        if (ok)
            cout << pos + 1 << endl;
        else
            cout << "-1\n";
    }
    return 0;
}