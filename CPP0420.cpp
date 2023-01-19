#include <bits/stdc++.h>
using namespace std;

int x;
pair<int, int> v[1000001];

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (abs(x - a.first) != abs(x - b.first))
    {
        return abs(x - a.first) < abs(x - b.first);
    }
    else
    {
        return a.second < b.second;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i].first = x;
            v[i].second = i;
        }
        sort(v, v + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << v[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}