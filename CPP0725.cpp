#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = (int)1e9 + 7;
ll C[1005][1005];

void Tohop()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Tohop();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, r;
        cin >> n >> r;
        cout << C[n][r] << endl;
    }
    return 0;
}