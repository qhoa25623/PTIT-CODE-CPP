#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll min(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '6')
        {
            a[i] = '5';
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '6')
        {
            b[i] = '5';
        }
    }
    ll c = stoll(a);
    ll d = stoll(b);
    return c + d;
}

ll max(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '5')
        {
            a[i] = '6';
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '5')
        {
            b[i] = '6';
        }
    }
    ll c = stoll(a);
    ll d = stoll(b);
    return c + d;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << endl;
    }
    return 0;
}