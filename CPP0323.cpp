#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string n;
        getline(cin, n);
        ll m;
        cin >> m;
        ll r = 0;
        for (int i = 0; i < n.size(); i++)
        {
            r = r * 10 + (n[i] - '0');
            r %= m;
        }
        cout << r << endl;
    }
    return 0;
}