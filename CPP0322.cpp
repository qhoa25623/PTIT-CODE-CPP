#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a.length() < b.length())
            swap(a, b);
        while (a.length() != b.length())
            b.insert(0, "0");
        string c;
        int nho = 0;
        for (int i = a.length() - 1; i >= 0; i--)
        {
            int x = a[i] + b[i] - 96 + nho;
            nho = x / 10;
            int z = x % 10;
            c.push_back(z + '0');
        }
        if (nho > 0)
            c.push_back(nho + '0');
        for (int i = 0; i < c.length() / 2; i++)
            swap(c[i], c[c.length() - i - 1]);
        cout << c << endl;
    }
    return 0;
}