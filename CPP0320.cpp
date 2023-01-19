#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a;
        getline(cin, a);
        int ok = 1;
        set<char> se;
        if (a[0] == '0')
        {
            ok = 0;
        }
        else
        {
            for (int i = 0; i < a.length(); i++)
            {
                if (isalpha(a[i]))
                {
                    ok = 0;
                    break;
                }
                else
                {
                    se.insert(a[i]);
                }
            }
        }
        if (ok == 0)
        {
            cout << "INVALID\n";
        }
        else
        {
            if (se.size() == 10)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}