#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[505][505];

const int p = (int)1e6;
int prime[p + 1];
void sieve()
{
    for (int i = 0; i <= p; i++)
    {
        prime[p] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= sqrt(p); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= p; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int res[1000001];
int main()
{
    int idx = 0;
    sieve();
    for (int i = 0; i <= 1000001; i++)
    {
        if (prime[i])
        {
            res[idx] = i;
            idx++;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans[n][n];
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        int cnt = 0;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int j = c1; j <= c2; j++)
            {
                a[h1][j] = res[cnt];
                cnt++;
            }
            h1++;
            for (int j = h1; j <= h2; j++)
            {
                a[j][c2] = res[cnt];
                cnt++;
            }
            c2--;
            if (c1 <= c2)
            {
                for (int j = c2; j >= c1; j--)
                {
                    a[h2][j] = res[cnt];
                    cnt++;
                }
                h2--;
            }
            if (h1 <= h2)
            {
                for (int j = h2; j >= h1; j--)
                {
                    a[j][c1] = res[cnt];
                    cnt++;
                }
                c1++;
            }
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