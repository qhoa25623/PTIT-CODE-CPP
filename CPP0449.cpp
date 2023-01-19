#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> se(a, a + n);
        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (se.find(a[i] - x) != se.end())
            {
                ok = 1;
                break;
            }
        }
        if (ok)
            cout << "1\n";
        else
            cout << "-1\n";
    }
    return 0;
}