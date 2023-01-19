#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string hoten, lop, ngaysinh;
    double gpa;
    string masv = "B20DCCN";
};

void nhap(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].hoten);
        cin >> a[i].lop >> a[i].ngaysinh >> a[i].gpa;
    }
}

void ChuanHoaNgaySinh(SinhVien &a)
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

void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string tmp = to_string(i + 1);
        while (tmp.size() < 3)
        {
            tmp = "0" + tmp;
        }
        a[i].masv += tmp;
        ChuanHoaNgaySinh(a[i]);
        cout << a[i].masv << " " << a[i].hoten << " " << a[i].lop << " " << a[i].ngaysinh << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}