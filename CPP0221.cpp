#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MAX = 505;
int a[505][MAX];
void Solution(int n, int m, int a[MAX][MAX])
{
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n)
    {
        if (row + 1 == m || col + 1 == n)
            break;
        prev = a[row + 1][col];
        for (int i = col; i < n; i++)
        {
            curr = a[row][i];
            a[row][i] = prev;
            prev = curr;
        }
        row++;
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n - 1];
            a[i][n - 1] = prev;
            prev = curr;
        }
    }
}
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
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    return 0;
}