#include <bits/stdc++.h>
using namespace std;

int a[1000001], b[1000001];

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
        sort(a,a+n);
        int cnt = 0;
        for (int i = 0; i < n; i += 2)
        {
            b[i] = a[cnt++];
        }
        for (int i = 1; i < n; i += 2)
        {
            b[i] = a[cnt++];
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}