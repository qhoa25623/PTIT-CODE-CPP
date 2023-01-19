#include <bits/stdc++.h>
using namespace std;

bool tangchat(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] <= v[i - 1])
            return false;
    }
    return true;
}

bool bangnhau(vector<int> v)
{
    int tmp = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != tmp)
            return false;
    }
    return true;
}

bool daucuoi(vector<int> v)
{
    int tmp1 = v[0];
    for (int i = 0; i < 2; i++)
    {
        if (v[i] != tmp1)
            return false;
    }
    int tmp2 = v[v.size() - 1];
    for (int i = 3; i < 5; i++)
    {
        if (v[i] != tmp2)
            return false;
    }
    return true;
}

bool locphat(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 6 && v[i] != 8)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        vector<int> v;
        for (int i = 5; i <= s.size() - 1; i++)
        {
            if (isdigit(s[i]))
                v.push_back(s[i] - '0');
        }
        if (tangchat(v) || bangnhau(v) || daucuoi(v) || locphat(v))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}