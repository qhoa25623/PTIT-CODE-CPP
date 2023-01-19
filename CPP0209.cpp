#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int F[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                F[i] = a[0];
            }
            else
            {
                F[i] = F[i - 1] + a[i];
            }
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (l == 1)
            {
                cout << F[r - 1] << endl;
            }
            else
            {
                cout << F[r - 1] - F[l - 2] << endl;
            }
        }
    }
    return 0;
}