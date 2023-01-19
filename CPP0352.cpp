#include <bits/stdc++.h>
using namespace std;

using ll = long long;

map<string, int> mp;

vector<string> res;

void CH(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            CH(tmp);
            v.push_back(tmp);
        }
        string fn = "";
        for (int i = 0; i < v.size() - 1; i++)
        {
            fn += v[i][0];
        }
        fn = v[v.size() - 1] + fn;
        mp[fn]++;
        if (mp[fn] == 1)
        {
            fn += "@ptit.edu.vn";
        }
        else
        {
            fn += to_string(mp[fn]) + "@ptit.edu.vn";
        }
        res.push_back(fn);
    }
    for (auto x : res)
    {
        cout << x << endl;
    }
    return 0;
}