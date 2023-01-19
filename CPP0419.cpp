#include <bits/stdc++.h>
using namespace std;

int a[100001];
int b[100001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> s;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            mp[a[i]] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            s.insert(b[i]);
            if (mp[b[i]] == 1)
            {
                mp[b[i]] = 2;
            }
        }
        for (auto x : s)
        {
            cout << x << " ";
        }
        cout << endl;
        for (auto it : mp)
        {
            if (it.second == 2)
            {
                cout << it.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}