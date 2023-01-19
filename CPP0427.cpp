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
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dem++;
        }
        if (dem == 1 && a[0] == 0)
        {
            cout << "0";
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == a[i + 1] && a[i] != 0)
                {
                    a[i] *= 2;
                    a[i + 1] = 0;
                }
                if (a[i] != 0)
                {
                    cout << a[i] << " ";
                }
                else
                {
                    cnt++;
                }
            }
            if (a[n - 1] != 0)
            {
                cout << a[n - 1] << " ";
            }
            else
            {
                cnt++;
            }
            for (int i = 0; i < cnt; i++)
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}