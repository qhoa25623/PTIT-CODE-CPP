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
        vector<int> v;
        int c = 0, l = 0;
        int n;
        while (cin >> n)
        {
            if (n % 2 == 0)
                c++;
            else
                l++;
            v.push_back(n);
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout<<endl;
        if ((v.size() % 2 == 0 && c > l) || (v.size() % 2 != 0 && c < l))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}