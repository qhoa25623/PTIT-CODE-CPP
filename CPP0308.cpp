#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--)
    {
        string s;
        getline(cin, s);
        int cnt[256] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            cnt[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (cnt[s[i]] == 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}