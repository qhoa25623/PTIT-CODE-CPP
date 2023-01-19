#include <bits/stdc++.h>
using namespace std;

int prime[1000001];
void sieve()
{
    for (int i = 0; i <= 1000001; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= sqrt(1000001); i++)
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
        int n;
        cin >> n;
        int ok = 0;
        for (int i = 0; i <= n; i++)
        {
            if (prime[i] && prime[n - i])
            {
                cout << i << " " << n - i << endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << "-1" << endl;
    }
    return 0;
}