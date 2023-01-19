#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string CH(char &x)
{
    string res = "";
    if (x == 'A' || x == 'K')
    {
        return res += "0";
    }
    else if (x == 'B' || x == 'L')
    {
        return res += "1";
    }
    else if (x == 'C' || x == 'M')
    {
        return res += "2";
    }
    else if (x == 'D' || x == 'N')
    {
        return res += "3";
    }
    if (x == 'E' || x == 'O')
    {
        return res += "4";
    }
    if (x == 'F' || x == 'P')
    {
        return res += "5";
    }
    if (x == 'G' || x == 'Q')
    {
        return res += "6";
    }
    if (x == 'H' || x == 'R')
    {
        return res += "7";
    }
    if (x == 'I' || x == 'S')
    {
        return res += "8";
    }
    else if (x == 'J' || x == 'T')
    {
        return res += "9";
    }
    return "x";
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
        string s1, s2;
        cin >> s1 >> s2;
        string tmp = "";
        for (auto x : s2)
        {
            if (isalpha(x))
            {
                tmp += CH(x);
            }
        }
        if (s1 == tmp)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}