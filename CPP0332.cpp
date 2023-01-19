#include <bits/stdc++.h>
using namespace std;

void lower(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    string s;
    getline(cin, s);
    lower(s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    string n = v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++)
    {
        n = n + v[i].substr(0, 1);
    }
    n += "@ptit.edu.vn";
    cout<<n;
    return 0;
}