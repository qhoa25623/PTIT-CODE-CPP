#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    static int cnt;
    string msv, hoten, lop, ngaysinh;
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
        sv.msv = "B20DCCN" + string(3 - to_string(sv.cnt).length(), '0') + to_string(sv.cnt);
        sv.cnt++;
        scanf("\n");
        getline(in, sv.hoten);
        cin >> sv.lop >> sv.ngaysinh >> sv.gpa;
        sv.chuanhoa();
        return in;
    }

    friend ostream &operator<<(ostream &out, SinhVien sv)
    {
        out << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.ngaysinh << " " << fixed << setprecision(2) << sv.gpa << endl;
        return out;
    }
};
int SinhVien::cnt = 1;
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}