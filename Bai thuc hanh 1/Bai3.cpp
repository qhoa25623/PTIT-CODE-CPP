#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll tongcs(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
ll ptich(ll n)
{
    ll sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ll tmp = 1;
                if (i > 10)
                {
                    tmp = tongcs(i);
                    sum += tmp;
                }
                else
                {
                    sum += 1ll * i;
                }
                n /= i;
            }
        }
    }
    if (n!=1)
    {
        ll t=1;
        if(n>10){
            t=tongcs(n);
            sum+=t;
        }else{
            sum+=n;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    if (ptich(n) == tongcs(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}