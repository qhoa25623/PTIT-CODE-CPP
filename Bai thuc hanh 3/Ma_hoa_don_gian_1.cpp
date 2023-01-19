#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Mahoa(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            if (s[i] == 'A')
            {
                s[i] = 'Y';
            }
            else if (s[i] == 'B')
            {
                s[i] ='Z';
            }
            else
            {
                s[i] -= 2;
            }
        }
        else if (islower(s[i]))
        {
            if (s[i] == 'y')
            {
                s[i] = 'a';
            }
            else if (s[i] == 'z')
            {
                s[i] = 'b';
            }
            else
            {
                s[i] += 2;
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