#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (auto x : a)
        {
            v.push_back(to_string(x));
        }
        sort(v.begin(), v.end(), cmp);
        for (auto x : v)
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}