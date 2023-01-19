#include <bits/stdc++.h>
using namespace std;

int sumcs(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool nt(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int sumnt(int n)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            sum += sumcs(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        sum += sumcs(n);
    }
    return sum;
}
int smith(int n)
{
    if (sumnt(n) == sumcs(n) && nt(n) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (smith(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}