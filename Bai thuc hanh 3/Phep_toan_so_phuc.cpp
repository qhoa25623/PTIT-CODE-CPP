#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct SoPhuc
{
    double thuc, ao;
    friend istream &operator>>(istream &in, SoPhuc &sp)
    {
        in >> sp.thuc >> sp.ao;
        return in;
    }
};

SoPhuc binh_phuong(SoPhuc a)
{
    SoPhuc c;
    c.thuc = a.thuc * a.thuc - a.ao * a.ao;
    c.ao = 2 * a.thuc * a.ao;
    return c;
}
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
    SoPhuc res;
    SoPhuc c, d;
    c = binh_phuong(a);
    d = binh_phuong(b);
    res.thuc = c.thuc + d.thuc + 2 * a.thuc * b.thuc - 2 * a.ao * b.ao;
    res.ao = c.ao + d.ao + 2 * a.thuc * b.ao + 2 * a.ao * b.thuc;
    return res;
}
void hien_thi(SoPhuc res)
{
    cout << res.thuc;
    if (res.ao > 0)
    {
        cout << " + " << res.ao << "i";
    }
    else
    {
        cout << " - " << res.ao << "i";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
}