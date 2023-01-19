#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1000000007;

ll F[1001];

void dp()
{
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
        F[i] %= mod;
    }
}
int main()
{
    dp();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << F[n] << endl;
    }
}