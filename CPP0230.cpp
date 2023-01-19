#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnto = 0, cntz = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                cntz++;
            }
            else
            {
                cnto++;
            }
        }
        if (cnto > cntz)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}