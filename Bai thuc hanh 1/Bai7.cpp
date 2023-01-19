#include <bits/stdc++.h>
using namespace std;

pair<int, int> pa[1000];
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pa[i].first >> pa[i].second;
    }
    sort(pa, pa + n, cmp);
    int res = pa[0].first + pa[0].second;
    for (int i = 1; i < n; i++)
    {
        if (pa[i].first < res)
        {
            res += pa[i].second;
        }
        else
        {
            res = pa[i].first + pa[i].second;
        }
    }
    cout << res;
    return 0;
}