#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        for (ll i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                sum += i;
                ll tmp = n / i;
                if (tmp != i)
                {
                    sum += tmp;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}