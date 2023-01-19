#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        int max_val = -1e9;
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > max_val)
            {
                max_val = v[i];
                pos = i;
            }
        }
        v.insert(v.begin() + pos, m);
        for (auto x : v)
        {
            if (x < 0)
            {
                cout << x << " ";
            }
        }
        for (auto x : v)
        {
            if (x >= 0)
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}