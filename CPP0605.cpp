#include <bits/stdc++.h>
using namespace std;

using ll=long long;

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
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
    friend istream &operator>>(istream &in, PhanSo &ps)
    {
        in >> ps.tu >> ps.mau;
        return in;
    }
    void rutgon()
    {
        ll uc = gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }
    friend ostream &operator<<(ostream &out, PhanSo ps)
    {
        out << ps.tu << "/" << ps.mau;
        return out;
    }
};
int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}