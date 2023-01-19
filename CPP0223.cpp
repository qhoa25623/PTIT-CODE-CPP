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
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int j = c1; j <= c2; j++)
            {
                cout << a[h1][j] << " ";
            }
            if (h1 == h2)
                break;
            h1++;
            for (int j = h1; j <= h2; j++)
            {
                cout << a[j][c2] << " ";
            }
            if (c2 == c1)
                break;
            c2--;
            for (int j = c2; j >= c1; j--)
            {
                cout << a[h2][j] << " ";
            }
            h2--;
            for (int j = h2; j >= h1; j--)
            {
                cout << a[j][c1] << " ";
            }
            c1++;
        }
        cout << endl;
    }
    return 0;
}