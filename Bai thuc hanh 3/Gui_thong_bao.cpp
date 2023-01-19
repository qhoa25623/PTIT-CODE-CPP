#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        int l = 0;
        for (int i = 0; i < v.size(); i++)
        {
            l += v[i].size();
            if (l <= 100)
            {
                cout << v[i] << " ";
                l += 1;
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}