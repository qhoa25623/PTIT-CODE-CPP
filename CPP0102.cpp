#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        char s;
        cin >> s;
        if (isupper(s))
        {
            char t = tolower(s);
            cout << t << endl;
        }
        else
        {
            char t = toupper(s);
            cout << t << endl;
        }
    }
    return 0;
}