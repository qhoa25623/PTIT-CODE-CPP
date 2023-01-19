#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void ChuanHoa(string &s)
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
    ifstream in;
    in.open("CONTACT.in");
    if (in.is_open())
    {
        string s;
        while (getline(in, s))
        {
            ChuanHoa(s);
            se.insert(s);
        }
    }
    for (auto x : se)
    {
        cout << x << endl;
    }
    return 0;
}