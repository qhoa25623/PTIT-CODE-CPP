#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = s.size() - 2;
        while (i >= 0 && s[i] <= s[i + 1])
        {
            i--;
        }
        if (i == -1)
        {
            cout << "-1\n";
            continue;
        }
        int j = s.size() - 1;
        while (s[i] <= s[j] || s[j - 1] == s[j] && s[j] < s[i])
        {
            j--;
        }
        swap(s[i], s[j]);
        if (s[0] == '0')
            cout << "-1\n";
        else
            cout << s << endl;
    }
    return 0;
}