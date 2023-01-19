#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        ll tmp = 1;
        int x=i;
        while (x!=0)
        {
            tmp = tmp * x;
            x--;
        }
        sum+=tmp;
    }
    cout<<sum;
    return 0;
}