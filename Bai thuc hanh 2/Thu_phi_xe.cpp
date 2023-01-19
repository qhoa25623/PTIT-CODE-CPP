#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main()
{
    int t;
    cin >> t;
    cin.ignore();
    map<string, ll> mp;
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
        if (v[3] == "IN")
        {
            ll tien = 0;
            if (v[2] == "5")
            {
                tien = 10000;
            }
            else if (v[2] == "7")
            {
                tien = 15000;
            }
            else if (v[2] == "2")
            {
                tien = 20000;
            }
            else if (v[2] == "29")
            {
                tien = 50000;
            }
            else
            {
                tien = 70000;
            }
            mp[v[4]] += tien;
        }
    }
    for(auto it:mp){
        cout<<it.first<<": "<<it.second<<endl;
    }
    return 0;
}