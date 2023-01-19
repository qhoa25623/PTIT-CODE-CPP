#include <bits/stdc++.h>
using namespace std;

int a[1000001];
pair<int, int> p[1000001];

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt[100001]={0};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            p[i].first = a[i];
            p[i].second = cnt[a[i]];
        }
        sort(p, p + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << p[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}