#include <bits/stdc++.h>
using namespace std;

int a[1000001];
bool fib(int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    int fib0 = 0, fib1 = 1;
    for (int i = 2; i <= 92; i++)
    {
        int fibn = fib0 + fib1;
        if (fibn == n)
        {
            return true;
        }
        fib0 = fib1;
        fib1 = fibn;
    }
    return false;
}
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
            if (fib(a[i]))
                cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}