#include <bits/stdc++.h>
using namespace std;

bool Locphat(int n)
{
    while (n)
    {
        int tmp = n % 10;
        if (tmp != 0 && tmp != 6 && tmp != 8)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        if (Locphat(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}