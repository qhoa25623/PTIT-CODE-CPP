#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    int a[m], b[m];
    int tmp = s;
    if (s > 9 * m || (s == 0 && m >= 2))
    {
        cout << "-1 -1";
        return 0;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            if (s >= 9)
            {
                a[i] = 9;
                s -= 9;
            }
            else
            {
                a[i] = s;
                s = 0;
            }
        }
        tmp--;
        for (int i = m - 1; i >= 0; i--)
        {
            if (tmp >= 9)
            {
                b[i] = 9;
                tmp -= 9;
            }
            else
            {
                b[i] = tmp;
                tmp = 0;
            }
        }
        b[0] += 1;
    }
    for (auto x : b)
    {
        cout << x;
    }
    cout<<" ";
    for (auto x : a)
    {
        cout << x;
    }
    return 0;
}