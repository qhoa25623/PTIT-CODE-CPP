#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Ptich(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << " " << cnt << " ";
        }
    }
    if (n != 1)
        cout << n << " " << 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Ptich(n);
        cout << endl;
    }
    return 0;
}