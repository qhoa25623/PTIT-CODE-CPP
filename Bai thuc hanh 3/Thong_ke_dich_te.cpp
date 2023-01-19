#include <bits/stdc++.h>
using namespace std;

using ll = long long;

pair<int, int> path[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == -1)
            {
                for (int k = 0; k < 8; k++)
                {
                    int inew = i + path[k].first;
                    int jnew = j + path[k].second;
                    if (inew >= 0 && inew < n && jnew >= 0 && jnew < m && a[inew][jnew] >= 0)
                    {
                        ans += a[inew][jnew];
                        a[inew][jnew] = -2;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}