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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok = 0;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > 1)
            {
                ok = 1;
                val = a[i];
                break;
            }
        }
        if (ok)
            cout << val << endl;
        else
            cout << "NO\n";
    }
    return 0;
}