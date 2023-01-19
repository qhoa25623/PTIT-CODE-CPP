#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Ptich(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while(n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
    }
    if (n != 1)
    {
        cout << n;
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        Ptich(n);
        cout << endl;
    }
    return 0;
}