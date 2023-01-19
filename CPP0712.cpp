#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x[k + 1];
        for (int i = 1; i <= k; i++)
        {
            x[i] = i;
        }
        while (1)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << x[i];
            }
            cout << " ";
            int i = k;
            while (x[i] == n - k + i && i > 0)
            {
                i--;
            }
            if (i == 0)
            {
                cout << endl;
                break;
            }
            else
            {
                x[i]++;
                for (int j = i + 1; j <= k; j++)
                {
                    x[j] = x[j - 1] + 1;
                }
            }
        }
    }
    return 0;
}