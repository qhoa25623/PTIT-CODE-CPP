#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[505][505];

const int p = (int)1e6;
int prime[p + 1];
void sieve()
{
    for (int i = 0; i <= p; i++)
    {
        prime[p] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= sqrt(p); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= p; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}