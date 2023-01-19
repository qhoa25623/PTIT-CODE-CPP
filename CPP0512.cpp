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
    void rutgon()
    {
        ll uc = gcd(abs(tu), abs(mau));
        tu /= uc;
        mau /= uc;
    }
};

PhanSo HamC(PhanSo a, PhanSo b)
{
    PhanSo c;
    ll mc = lcm(a.mau, b.mau);
    c.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    c.mau = mc;
    c.tu *= c.tu;
    c.mau *= c.mau;
    c.rutgon();
    return c;
}

PhanSo HamD(PhanSo a, PhanSo b, PhanSo c)
{
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    d.rutgon();
    return d;
}

void in(PhanSo a)
{
    // if (a.tu * a.mau < 0)
    // {
    //     a.mau = abs(a.mau);
    //     if (a.tu > 0)
    //         a.tu *= -1;
    // }
    cout << a.tu << "/" << a.mau;
}

void process(PhanSo a, PhanSo b)
{
    PhanSo c = HamC(a, b);
    PhanSo d = HamD(a, b, c);
    in(c);
    cout << " ";
    in(d);
    cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}