#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ifstream in;
    ll sum = 0;
    in.open("DATA.in");
    if (in.is_open())
    {
        string s;
        while (in >> s)
        {
            if (s.size() >= 1 && s.size() <= 9 && isdigit(s[0]))
            {
                sum += stoi(s);
            }
        }
    }
    cout << sum;
    return 0;
}