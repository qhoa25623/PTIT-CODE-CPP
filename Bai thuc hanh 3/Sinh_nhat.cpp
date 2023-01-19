#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void chuanhoa(string &s)
{
    if (s[1] == '/')
    {
        s = "0" + s;
    }
    if (s[4] == '/')
    {
        s.insert(3, "0");
    }
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        for (int i = 0; i < s.size() - 4; i++)
        {
            res += s[i];
        }
        cout << res;
        chuanhoa(s);
        int t = stoi(s.substr(6, 4));
        t += n;
        cout << t << endl;
    }
    return 0;
}