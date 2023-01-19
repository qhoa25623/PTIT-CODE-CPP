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
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}