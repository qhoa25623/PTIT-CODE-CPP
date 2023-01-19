#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n < 2)
    {
        return false;
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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int cnt = 0;
        for (int i = 1; i <= x; i++)
        {
            if (gcd(x, i) == 1)
                cnt++;
        }
        if (prime(cnt))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}