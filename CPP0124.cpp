#include <bits/stdc++.h>
using namespace std;

void Ptich(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            cout << i << " " << cnt << endl;
        }
    }
    if (n != 1)
    {
        cout << n << " " << 1 << endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Ptich(n);
    return 0;
}