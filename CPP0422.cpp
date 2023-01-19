#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll a[1000001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                idx++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
            }
        }
        for (int i = 0; i < idx; i++)
        {
            cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
