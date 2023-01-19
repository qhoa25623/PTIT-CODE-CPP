#include <bits/stdc++.h>
using namespace std;

bool tn(string s)
{
    if (s.size() == 1)
        return false;
    else
    {
        string tmp = s;
        reverse(s.begin(), s.end());
        return tmp == s;
    }
}

bool cmp(string s1, string s2)
{
    if (s1.size() != s2.size())
        return s1.size() > s2.size();
    else
        return s1 > s2;
}
int main()
{
    string s;
    map<string, int> mp;
    vector<string> v;
    while (cin >> s)
    {
        if (tn(s))
        {
            mp[s]++;
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        if (mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}