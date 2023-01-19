#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string hoten;
    string ngaysinh;
    double diem1, diem2, diem3;
};

void nhap(ThiSinh &a)
{
    getline(cin, a.hoten);
    cin >> a.ngaysinh;
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void in(ThiSinh a)
{
    double diemtb = a.diem1 + a.diem2 + a.diem3;
    cout << a.hoten << " " << a.ngaysinh << " " << fixed << setprecision(1) << diemtb;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}