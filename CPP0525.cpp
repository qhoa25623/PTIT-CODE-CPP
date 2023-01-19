#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ma, ten, lop;
    double diem1, diem2, diem3;
    void nhap()
    {
        cin.ignore();
        getline(cin, ma);
        getline(cin, ten);
        getline(cin, lop);
        cin >> diem1 >> diem2 >> diem3;
    }
};
vector<SinhVien> v;

void NhapDS(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ds[i].nhap();
        v.push_back(ds[i]);
    }
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.ten < b.ten;
}
void InDS(SinhVien ds[])
{
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        cout << (i + 1) << " " << v[i].ma << " " << v[i].ten << " " << v[i].lop << " " << fixed << setprecision(1) << v[i].diem1 << " " << v[i].diem2 << " " << v[i].diem3 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    SinhVien ds[n];
    NhapDS(ds, n);
    InDS(ds);
    return 0;
}