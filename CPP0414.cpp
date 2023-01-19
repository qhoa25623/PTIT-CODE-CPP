#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<char> se;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            for (int j = 0; j < x.length(); j++)
            {
                se.insert(x[j]);
            }
        }
        for (auto x : se)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}