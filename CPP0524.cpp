#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string masv, hoten, lop;
    double diem1, diem2, diem3;
};
vector<SinhVien> v;

void nhap(SinhVien &x)
{
    cin.ignore();
    getline(cin, x.masv);
    getline(cin, x.hoten);
    getline(cin, x.lop);
    cin >> x.diem1 >> x.diem2 >> x.diem3;
    v.push_back(x);
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.masv < b.masv;
}
void sap_xep(SinhVien ds[], int n)
{
    sort(v.begin(), v.end(), cmp);
}
void in_ds(SinhVien ds[], int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << (i + 1) << " " << v[i].masv << " " << v[i].hoten << " " << v[i].lop << " " << fixed << setprecision(1) << v[i].diem1 << " " << v[i].diem2 << " " << v[i].diem3 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}