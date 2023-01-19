#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ten, lop, ngaysinh;
    string masv = "B20DCCN001";
    double gpa;
};
void nhap(SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop >> a.ngaysinh >> a.gpa;
}
void chuanhoa(SinhVien &a)
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
void in(SinhVien a)
{
    chuanhoa(a);
    cout << a.masv << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}