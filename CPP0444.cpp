#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i+1;
        }
    }
    return 0;
}
int a[1000001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << search(a, n, x) << endl;
    }
    return 0;
}