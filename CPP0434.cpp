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
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                F[i] = a[0] * a[1];
            }
            else if (i == n - 1)
            {
                F[i] = a[n - 1] * a[n - 2];
            }
            else
            {
                F[i] = a[i - 1] * a[i + 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << F[i] << " ";
        }
        cout << endl;
    }
    return 0;
}