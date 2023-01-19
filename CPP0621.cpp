#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string msv, ten, lop, email;
    friend istream &operator>>(istream &in, SinhVien &sv)
    {
        scanf("\n");
        getline(in, sv.msv);
        getline(in, sv.ten);
        in >> sv.lop >> sv.email;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien sv)
    {
        out << sv.msv << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}
int main()
{
    SinhVien sv;
    vector<SinhVien> v;
    while (cin >> sv)
    {
        v.push_back(sv);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        cout << x;
    }
    return 0;
}