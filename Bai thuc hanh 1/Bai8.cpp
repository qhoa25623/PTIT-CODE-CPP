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
        set<int> se;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        auto it1 = se.begin();
        auto it2 = se.rbegin();
        int res = (*it2 - *it1 +1) - se.size();
        cout << res << endl;
    }
    return 0;
}