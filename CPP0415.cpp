#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> se1(a, a + n);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        set<int> se2(b, b + m);
        auto it1 = se1.rbegin();
        auto it2 = se2.begin();
        ll result = 1ll * (*it1) * (*it2);
        cout << result << endl;
    }
    return 0;
}