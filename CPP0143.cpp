#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll fibo[100];

void init()
{
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i <= 92; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
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
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}