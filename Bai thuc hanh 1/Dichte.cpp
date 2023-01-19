#include <bits/stdc++.h>
using namespace std;

pair<int, int> path[] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int n, m;
int a[505][505];

int main()
{
    cin >> n >> m;
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
                        ans++;
                        a[inew][jnew]=-2;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}