#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Ho(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
void Ten(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    for (int i = 0; i <= v.size() - 2; i++)
    {
        Ho(v[i]);
        if (i == v.size() - 2)
        {
            cout << v[i] << ", ";
        }
        else
        {
            cout << v[i] << " ";
        }
    }
    Ten(v[v.size() - 1]);
    cout << v[v.size() - 1];
    return 0;
}