#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<int> mset;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            mset.insert(a[i]);
        }
        cout << *mset.rbegin() << " ";
        for (int i = 1; i <= n - k; i++)
        {
            mset.erase(mset.find(a[i - 1]));
            mset.insert(a[i + (k - 1)]);
            cout << *mset.rbegin() << " ";
        }
        cout << endl;
    }
    return 0;
}