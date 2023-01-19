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
        int sum = 0;
        while (1)
        {
            sum=0;
            for (int i = 0; i < s.length(); i++)
            {
                sum += (s[i] - '0');
            }
            if (sum < 10)
            {
                break;
            }
            s = to_string(sum);
        }
        if (sum == 9)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}