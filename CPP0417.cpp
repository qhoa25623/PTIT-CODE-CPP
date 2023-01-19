#include <bits/stdc++.h>
using namespace std;

int a[1000001], b[1000001];
int n;

int left()
{
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            pos = i + 1;
            break;
        }
    }
    return pos;
}

int right()
{
    int pos;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            pos = i + 1;
            break;
        }
    }
    return pos;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        cout << left() << " " << right() << endl;
    }
    return 0;
}