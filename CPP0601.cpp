#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string msv = "B20DCCN001";
    string hoten, lop, ngaysinh;
    double gpa;

public:
    void chuanhoa()
    {
        if (ngaysinh[1] == '/')
        {
            ngaysinh = "0" + ngaysinh;
        }
        if (ngaysinh[4] == '/')
        {
            ngaysinh.insert(3, "0");
        }
    }
    void nhap()
    {
        getline(cin, hoten);
        cin >> lop >> ngaysinh >> gpa;
    }
    void xuat()
    {
        chuanhoa();
        cout << msv << " " << hoten << " " << lop << " " << ngaysinh << " " << fixed << setprecision(2) << gpa;
    }
};
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}