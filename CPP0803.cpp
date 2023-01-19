#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    map<int, int> mp;
    ifstream in;
    in.open("DATA.in");
    if (in.is_open())
    {
        int tmp;
        while (in >> tmp)
        {
            mp[tmp]++;
        }
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}