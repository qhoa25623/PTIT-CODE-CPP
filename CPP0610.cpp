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
class PhanSo
{
private:
    ll tu, mau;

public:
    PhanSo(ll x, ll y)
    {
        this->tu = x;
        this->mau = y;
    }
    void rutgon()
    {
        ll uc = gcd(mau, tu);
        tu /= uc;
        mau /= uc;
    }
    friend istream &operator>>(istream &in, PhanSo &ps)
    {
        in >> ps.tu >> ps.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo ps)
    {
        out << ps.tu << "/" << ps.mau;
        return out;
    }
    PhanSo operator + (const PhanSo b)
    {
        PhanSo res(1, 1);
        ll mc = lcm(this->mau, b.mau);
        res.tu = mc / this->mau * this->tu + mc / b.mau * b.tu;
        res.mau = mc;
        res.rutgon();
        return res;
    }
};
int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}