#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ifstream in;
    in.open("DATA.in");
    string s[3];
    int idx = 0;
    if (in.is_open())
    {
        string tmp;
        while (getline(in, tmp))
        {
            s[idx++] = tmp;
        }
    }
    map<int, int> mp;
    stringstream ss1(s[1]);
    string tmp;
    while (ss1 >> tmp)
    {
        mp[stoi(tmp)] = 1;
    }
    stringstream ss2(s[2]);
    while (ss2 >> tmp)
    {
        if (mp[stoi(tmp)] == 1)
        {
            mp[stoi(tmp)] = 2;
        }
    }
    for (auto x : mp)
    {
        if (x.second == 2)
            cout << x.first << " ";
    }
    return 0;
}