#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s[t];
    int cnt=0;
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (i != j)
            {
                if (s[i].find(s[j]) != -1)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}