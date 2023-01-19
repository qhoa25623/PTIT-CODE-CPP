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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ok = 0;
        int tmp = a[0];
        int pos = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != tmp)
            {
                ok = 1;
                pos = i;
                break;
            }
        }
        if (ok)
        {
            cout << a[0] << " " << a[pos] << endl;
        }else{
            cout<<"-1\n";
        }
    }
    return 0;
}