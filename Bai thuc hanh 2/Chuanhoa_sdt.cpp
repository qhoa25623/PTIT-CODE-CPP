#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    scanf("\n");
    while (n--)
    {
        string s;
        getline(cin, s);
        if (s.substr(0, 3) == "+84")
        {
            s.erase(0, 3);
            s = "0" + s;
        }
        else if (s.substr(0, 2) == "84")
        {
            s.erase(0, 2);
            s = "0" + s;
        }
        string tmp;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (!isdigit(s[i]))
            {
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        while (ss >> tmp)
        {
            res += tmp;
        }
        v.push_back(res);
    }
    for (auto x : v)
    {
        cout << x << endl;
    }
    return 0;
}