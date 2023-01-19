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
struct PhanSo
{
    ll tu, mau;
};
void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
void rutgon(PhanSo &a)
{
    ll uc = gcd(a.tu, a.mau);
    a.tu /= uc;
    a.mau /= uc;
}
void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau << endl;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}