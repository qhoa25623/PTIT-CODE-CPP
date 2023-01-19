#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        auto it1 = s.begin();
        auto it2 = s.rbegin();
        cout << ((*it2) - (*it1) + 1) - s.size() << endl;
    }
    return 0;
}