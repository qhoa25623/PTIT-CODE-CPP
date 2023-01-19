#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int pos;
        int cnt = 0;
        while (s.find("100") != -1)
        {
            int pos = s.find("100");
            s.erase(pos, 3);
            cnt += 3;
        }
        if (cnt != 0)
            cout << cnt << endl;
    }
    return 0;
}