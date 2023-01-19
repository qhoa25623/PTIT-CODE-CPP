#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool nt(ll n)
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

bool PNum(ll n)
{
    for (int p = 1; p <= 31; p++)
    {
        if (nt(p))
        {
            ll tmp = (ll)pow(2, p) - 1;
            if (nt(tmp))
            {
                ll num = tmp * (ll)pow(2, p - 1);
                if (num == n)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
    cin >> n;
    if (PNum(n))
        cout << "1\n";
    else
        cout << "0\n";
    }
    return 0;
}