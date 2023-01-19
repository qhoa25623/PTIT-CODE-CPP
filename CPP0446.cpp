#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res;
        int temp = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] + a[j]) < temp)
                {
                    temp = abs(a[i] + a[j]);
                    res = a[i] + a[j];
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
