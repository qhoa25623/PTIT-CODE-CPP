#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Chuanhoa(string &s)
{
    for (int i = 0; i <= s.length(); i++)
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
    ifstream in;
    in.open("VANBAN.in");
    if (in.is_open())
    {
        string tmp;
        while (in >> tmp)
        {
            Chuanhoa(tmp);
            se.insert(tmp);
        }
    }
    for (auto x : se)
    {
        cout << x << endl;
    }
    return 0;
}