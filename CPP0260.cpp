#include <bits/stdc++.h>
using namespace std;

int a[505][505];
int b[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[idx] = a[i][j];
                idx++;
            }
        }
        sort(b, b + idx - 1);
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1, idx2 = 0;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int j = c1; j <= c2; j++)
            {
                a[h1][j] = b[idx2];
                idx2++;
            }
            h1++;
            for (int j = h1; j <= h2; j++)
            {
                a[j][c2] = b[idx2];
                idx2++;
            }
            c2--;
            if (c1 <= c2)
            {
                for (int j = c2; j >= c1; j--)
                {
                    a[h2][j] = b[idx2];
                    idx2++;
                }
            }
            h2--;
            if (h1 <= h2)
            {
                for (int j = h2; j >= h1; j--)
                {
                    a[j][c1] = b[idx2];
                    idx2++;
                }
            }
            c1++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}