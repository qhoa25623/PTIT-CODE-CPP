#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Chuanhoa(string &s)
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
    set<string> se;
    map<string, int> mp;
    ifstream in1;
    in1.open("DATA1.in");
    if (in1.is_open())
    {
        string tmp;
        while (in1 >> tmp)
        {
            Chuanhoa(tmp);
            se.insert(tmp);
            mp[tmp] = 1;
        }
    }
    ifstream in2;
    in2.open("DATA2.in");
    if (in2.is_open())
    {
        string tmp;
        while (in2 >> tmp)
        {
            Chuanhoa(tmp);
            se.insert(tmp);
            if (mp[tmp] == 1)
                mp[tmp] = 2;
        }
    }
    for (auto x : se)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : mp)
    {
        if (x.second == 2)
        {
            cout << x.first << " ";
        }
    }
    return 0;
}