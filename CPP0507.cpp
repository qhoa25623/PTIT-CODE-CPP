#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
struct PhanSo
{
    ll tu, mau;
};
void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo c;
    ll mc = lcm(a.mau, b.mau);
    c.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    c.mau = mc;
    ll uc = gcd(c.tu, c.mau);
    c.tu /= uc;
    c.mau /= uc;
    return c;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}