#include <bits/stdc++.h>
using namespace std;

bool tn(string s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        ++l;
        --r;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        string t = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
                t += '2';
            if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
                t += '3';
            if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
                t += '4';
            if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
                t += '5';
            if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
                t += '6';
            if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
                t += '7';
            if (s[i] == 't' || s[i] == 'v' || s[i] == 'u')
                t += '8';
            if (s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
                t += '9';
        }
        if (tn(t))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}