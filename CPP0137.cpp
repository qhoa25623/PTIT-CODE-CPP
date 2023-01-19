#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int prime[1000001];
void sieve()
{
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= sqrt(1000000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000001; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        int tmp = sqrt(l);
        if (tmp * tmp == l)
        {
            tmp += 1;
        }
        ll cnt = 0;
        for (int i = tmp; i <= sqrt(r); i++)
        {
            if (prime[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}