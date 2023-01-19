#include <bits/stdc++.h>
using namespace std;

bool chia5(string s)
{
    int sum = 0;
    int tmp = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        sum += (s[i] - '0') * tmp;
        tmp *= 2;
        tmp %= 10;
        sum %= 10;
    }
    return sum % 5 == 0;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (chia5(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}