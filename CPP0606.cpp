#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
private:
    string manv = "00001";
    string hoten, gioitinh, ngaysinh, diachi, mst, hopdong;

public:
    void nhap()
    {
        getline(cin, hoten);
        cin >> gioitinh >> ngaysinh;
        cin.ignore();
        getline(cin, diachi);
        cin >> mst >> hopdong;
    }
    void xuat()
    {
        cout << manv << " " << hoten << " " << gioitinh << " " << ngaysinh << " " << diachi << " " << mst << " " << hopdong;
    }
};
int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}