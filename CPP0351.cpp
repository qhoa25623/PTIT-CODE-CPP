#include <bits/stdc++.h>
using namespace std;

void chuanhoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i <= s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore(1);
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        if (n == 1)
        {
            chuanhoa(v[v.size() - 1]);
            cout << v[v.size() - 1] << " ";
            for (int i = 0; i < v.size() - 1; i++)
            {
                chuanhoa(v[i]);
                if (i == v.size() - 2)
                {
                    cout << v[i];
                }
                else
                {
                    cout << v[i] << " ";
                }
            }
        }
        else
        {
            for (int i = 1; i < v.size(); i++)
            {
                chuanhoa(v[i]);
                cout << v[i] << " ";
            }
            chuanhoa(v[0]);
            cout << v[0];
        }
        cout << endl;
    }
    return 0;
}