#include <bits/stdc++.h>
using namespace std;

struct thoigian
{
    int gio, phut, giay;
    void nhap()
    {
        cin >> gio >> phut >> giay;
    }
    void in()
    {
        cout << gio << " " << phut << " " << giay << endl;
    }
};

bool cmp(thoigian a, thoigian b)
{
    if (a.gio != b.gio)
        return a.gio < b.gio;
    else if (a.phut != b.phut)
        return a.phut < b.phut;
    else
        return a.giay < b.giay;
}
int main()
{
    int n;
    cin >> n;
    vector<thoigian> v;
    while (n--)
    {
        thoigian t;
        t.nhap();
        v.push_back(t);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        x.in();
    }
    return 0;
}