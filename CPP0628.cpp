#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep
{
private:
    string ma, ten;
    int sl;

public:
    friend istream &operator>>(istream &in, DoanhNghiep &dn)
    {
        scanf("\n");
        getline(in, dn.ma);
        getline(in, dn.ten);
        in >> dn.sl;
        return in;
    }
    int getSL()
    {
        return this->sl;
    }

    string getMa()
    {
        return this->ma;
    }
    friend ostream &operator<<(ostream &out, DoanhNghiep dn)
    {
        out << dn.ma << " " << dn.ten << " " << dn.sl << endl;
        return out;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b)
{
    if (a.getSL() != b.getSL())
        return a.getSL() > b.getSL();
    else
        return a.getMa() < b.getMa();
}
int main()
{
    int n;
    cin >> n;
    DoanhNghiep dn[n];
    for (auto &x : dn)
    {
        cin >> x;
    }
    sort(dn, dn + n, cmp);
    for (auto x : dn)
    {
        cout << x;
    }
    return 0;
}