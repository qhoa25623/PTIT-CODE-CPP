#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string hoten, gioitinh, ngaysinh, diachi, masothue, hopdong;
    string manv = "00001";
};
void nhap(NhanVien &a)
{
    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.hopdong);
}
void chuanhoa(NhanVien &a)
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
void in(NhanVien &a)
{
    chuanhoa(a);
    cout << a.manv << " " << a.hoten << " " << a.gioitinh <<" "<< a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.hopdong;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}