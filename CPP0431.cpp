#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1000001];

int pos_end(int a[], int l, int r, int k)
{
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] < k)
        {
            pos = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return pos;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int p1 = pos_end(a, i + 1, n - 1, a[i] + k);
            if (p1 != -1)
            {
                cnt += p1 - i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}