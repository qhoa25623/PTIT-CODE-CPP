#include <bits/stdc++.h>
using namespace std;

int a[1000001];
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
        int l = 0, r = n - 1;
        int cnt = 0;
        while (l <= r)
        {
            if (a[l] == a[r])
            {
                ++l;
                --r;
            }
            else if (a[l] < a[r])
            {
                ++l;
                a[l] += a[l - 1];
                cnt++;
            }
            else
            {
                --r;
                a[r] += a[r + 1];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}