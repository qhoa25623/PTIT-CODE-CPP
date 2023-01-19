#include <bits/stdc++.h>
using namespace std;

bool tn(string s)
{
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
            return false;
        ++l;
        --r;
    }
    return true;
}

void solve(string s)
{
    int ok = 0;
    string num = "";
    s += "@";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            num += s[i];
        }
        else
        {
            string tmp = num;
            if (tmp == "")
                continue;
            if (tn(tmp))
            {
                cout << tmp << " ";
                ok = 1;
            }
            num = "";
        }
    }
    if (ok == 0)
    {
        cout << "-1";
    }
}
int main()
{
    ifstream cin;
    ofstream cout;
    cin.open("Input.txt");
    cout.open("Output.txt");
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}