#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    vector<int> vec;
    vector<int> v;
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int cnt = 0;
        while (ss >> tmp)
        {
            cnt++;
        }
        v.push_back(cnt);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 6)
        {
            vec.push_back(1);
            while (v[i] == 6 || v[i] == 8)
            {
                i++;
            }
            --i;
        }
        if (v[i] == 7)
        {
            vec.push_back(2);
            i+=3;
        }
    }
    cout << vec.size() << endl;
    for (auto x : vec)
    {
        cout << x << endl;
    }
    return 0;
}