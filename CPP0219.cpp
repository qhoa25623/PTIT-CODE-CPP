#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll a[505][505];
ll rows[505];
ll cols[505];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (rows[i] == 1)
            {
                for (int j = 0; j < m; j++)
                    a[i][j] = 1;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (cols[j] == 1)
            {
                for (int i = 0; i < n; i++)
                    a[i][j] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}