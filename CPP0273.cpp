#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int F[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        F[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            F[i] = a[i] + F[i - 1];
        }
        int pos = -1;
        for (int i = 1; i < n; i++)
        {
            int l = F[i];
            int r = F[n - 1] - F[i-1];
            if (l == r)
            {
                pos = i;
                break;
            }
        }
        if (pos != -1)
            cout << pos + 1 << endl;
        else
            cout << "-1\n";
    }
    return 0;
}