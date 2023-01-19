#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int b[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        multiset<int> mset;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mset.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mset.insert(b[i]);
        }
        for (auto x : mset)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}