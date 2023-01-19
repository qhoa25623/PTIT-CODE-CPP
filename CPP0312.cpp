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
        string s;
        int k;
        cin >> s >> k;
        set<char> se;
        for (auto x : s)
        {
            se.insert(x);
        }
        if (s.size() - se.size() >= k && 26 - se.size() <= k)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}