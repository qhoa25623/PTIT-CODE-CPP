#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Mahoa(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            if (s[i] == 'Y')
            {
                s[i] = 'A';
            }
            else if (s[i] == 'Z')
            {
                s[i] = 'B';
            }
            else
            {
                s[i] += 2;
            }
        }
        else if (islower(s[i]))
        {
            if (s[i] == 'a')
            {
                s[i] = 'y';
            }
            else if (s[i] == 'b')
            {
                s[i] = 'z';
            }
            else
            {
                s[i] -= 2;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    getline(cin, s);
    Mahoa(s);
    cout << s;
    return 0;
}