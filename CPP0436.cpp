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
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(b, b + n, a[i]);
            if (it == b + n)
            {
                cout << "_ ";
            }
            else
            {
                cout << *it << " ";
            }
        }
        cout << endl;
    }
    return 0;
}