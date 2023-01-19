#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(ll n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (prime(i))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}