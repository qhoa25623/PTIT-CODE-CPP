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
        vector<int> v(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int idx = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != idx)
            {
                cout << idx << endl;
                break;
            }
            idx++;
        }
    }
    return 0;
}