#include <bits/stdc++.h>
using namespace std;

struct MatHang
{
    int ma;
    string ten, nhom;
    double mua, ban;
};

vector<MatHang> v;

void nhap(MatHang &x, int i)
{
    x.ma = i+1;
    cin.ignore();
    getline(cin, x.ten);
    getline(cin, x.nhom);
    cin >> x.mua >> x.ban;
}

void NhapDS(MatHang ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i], i);
        v.push_back(ds[i]);
    }
}

bool cmp(MatHang a, MatHang b)
{
    return a.ban - a.mua > b.ban - b.mua;
}

void in(MatHang a)
{
    double loinhuan = a.ban - a.mua;
    cout << a.ma << " " << a.ten << " " << a.nhom << " " << fixed << setprecision(2) << loinhuan << endl;
}
void InDS(MatHang ds[])
{
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        in(v[i]);
    }
}
int main()
{
    int t;
    cin >> t;
    MatHang ds[t];
    NhapDS(ds, t);
    InDS(ds);
    return 0;
}