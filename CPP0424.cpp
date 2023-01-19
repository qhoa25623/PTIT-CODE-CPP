#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        multiset<int> s;
        for (int i = 0; i < n * k; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (int x : s)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}