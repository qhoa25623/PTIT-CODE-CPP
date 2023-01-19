#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                s[i] = ' ';
            }
        }
        int ok = 1;
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while (ss >> tmp)
        {
            if (check(tmp))
            {
                int num = stoi(tmp);
                if (num < 0 || num > 255)
                {
                    ok = 0;
                    break;
                }
                else
                {
                    v.push_back(tmp);
                }
            }
            else
            {
                break;
            }
        }
        if (ok && v.size() == 4)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}