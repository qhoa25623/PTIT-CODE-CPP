#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string t = "";
        int n;
        string num;
        cin >> n;
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (num[i] == '4')
            {
                t += "223";
            }
            else if (num[i] == '6')
            {
                t += "35";
            }
            else if (num[i] == '8')
            {
                t += "2227";
            }
            else if (num[i] == '9')
            {
                t += "3327";
            }
            else if (num[i] != '0' && num[i] != '1')
            {
                t += num[i];
            }
        }
        sort(t.begin(), t.end(), greater<int>());
        cout << t << endl;
    }
    return 0;
}