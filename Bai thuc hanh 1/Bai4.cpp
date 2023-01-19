#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll fib[93];

void init()
{
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int ok = 0;
        for (int i = 0; i <= 92; i++)
        {
            if (n == fib[i])
            {
                ok = 1;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}