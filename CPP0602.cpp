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
    friend istream &operator>>(istream &in, SinhVien &sv)
    {
        getline(in, sv.hoten);
        cin >> sv.lop >> sv.ngaysinh >> sv.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien sv)
    {
        sv.chuanhoa();
        cout << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.ngaysinh << " " << fixed << setprecision(2) << sv.gpa;
        return out;
    }
};
int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}