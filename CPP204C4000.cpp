#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string hoten, lop, ngaysinh;
    double gpa;
    string masv = "N20DCCN001";
};

void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.hoten);
    cin >> a.lop >> a.ngaysinh >> a.gpa;
}

void ChuanHoaSV(SinhVien &a)
{
    if (a.ngaysinh[1] == '/')
    {
        a.ngaysinh = "0" + a.ngaysinh;
    }
    if (a.ngaysinh[4] == '/')
    {
        a.ngaysinh.insert(3, "0");
    }
}
void inThongTinSV(SinhVien a)
{
    ChuanHoaSV(a);
    cout << a.masv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa;
}
int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}