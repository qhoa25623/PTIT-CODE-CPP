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
        int sum = 0;
        int tmp = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                tmp = tmp * 10 + (s[i] - '0');
            }
            else
            {
                sum += tmp;
                tmp = 0;
            }
        }
        if (tmp != 0)
        {
            sum += tmp;
        }
        cout << sum << endl;
    }
    return 0;
}