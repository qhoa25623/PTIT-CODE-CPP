#include <bits/stdc++.h>
using namespace std;

pair<int, int> path[] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int n, m;
int a[505][505];

void DFS(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int inew = i + path[k].first;
        int jnew = j + path[k].second;
        if (inew >= 0 && inew < n && jnew >= 0 && jnew < m && a[inew][jnew] == 1)
        {
            DFS(inew, jnew);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
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
                if (a[i][j] == 1)
                {
                    ans++;
                    DFS(i, j);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}