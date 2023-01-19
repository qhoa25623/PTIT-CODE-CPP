#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n >= 2;
}

int p[400];
void init()
{
    int cnt = 0, i = 0;
    while (cnt < 400)
    {
        if (prime(i))
        {
            p[cnt] = i;
            ++cnt;
        }
        i++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n][n];
        int idx = 0;
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1; i <= c2; i++)
            {
                a[h1][i] = p[idx];
                idx++;
            }
            ++h1;
            for (int i = h1; i <= h2; i++)
            {
                a[i][c2] = p[idx];
                idx++;
            }
            --c2;
            if (c1 <= c2)
            {
                for (int i = c2; i >= c1; i--)
                {
                    a[h2][i] = p[idx];
                    idx++;
                }
                --h2;
            }
            if (h1 <= h2)
            {
                for (int i = h2; i >= h1; i--)
                {
                    a[i][c1] = p[idx];
                    idx++;
                }
                ++c1;
            }
        }
        cout << "Test " << i + 1 << ":\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}