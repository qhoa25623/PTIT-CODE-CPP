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
        sort(a, a + n, greater<int>());
        int l = 0, r = n - 1;
        while (l < r)
        {
            cout << a[l] << " " << a[r] << " ";
            ++l;
            --r;
        }
        if (n % 2 != 0)
        {
            cout << a[l];
        }
        cout << endl;
    }
    return 0;
}