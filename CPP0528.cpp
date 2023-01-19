#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    static int cnt;
    int tt;
    string msv, hoten, lop, email, cty;

public:
    friend istream &operator>>(istream &in, SinhVien &sv)
    {
        scanf("\n");
        sv.tt = sv.cnt;
        sv.cnt++;
        getline(in, sv.msv);
        getline(in, sv.hoten);
        in >> sv.lop >> sv.email >> sv.cty;
        return in;
    }
    string getTen()
    {
        return this->hoten;
    }
    string getCty()
    {
        return this->cty;
    }
    friend ostream &operator<<(ostream &out, SinhVien sv)
    {
        out << sv.tt << " " << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.email << " " << sv.cty << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.getTen() < b.getTen();
}
int SinhVien::cnt = 1;
int main()
{
    int n;
    cin >> n;
    SinhVien sv[n];
    for (auto &x : sv)
    {
        cin >> x;
    }
    sort(sv, sv + n, cmp);
    int tv;
    cin >> tv;
    while (tv--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (sv[i].getCty() == s)
            {
                cout << sv[i];
            }
        }
    }
    return 0;
}