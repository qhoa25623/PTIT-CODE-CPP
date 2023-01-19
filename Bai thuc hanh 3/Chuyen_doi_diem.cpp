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
        if (n < 450)
        {
            cout << "-1\n";
        }
        else if (n >= 450 && n <= 520)
        {
            cout << "7\n";
        }
        else if (n >= 525 && n <= 595)
        {
            cout << "8\n";
        }
        else if (n >= 600 && n <= 725)
        {
            cout << "9\n";
        }
        else
        {
            cout << "10\n";
        }
    }
    return 0;
}