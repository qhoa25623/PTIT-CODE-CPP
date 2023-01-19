#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
private:
    static int cnt;
    string mnv, hoten, gioitinh, ngaysinh, diachi, mst, hopdong;

public:
    friend istream &operator>>(istream &in, NhanVien &nv)
    {
        scanf("\n");
        nv.mnv = string(5 - to_string(nv.cnt).length(), '0') + to_string(nv.cnt);
        nv.cnt++;
        getline(in, nv.hoten);
        in >> nv.gioitinh >> nv.ngaysinh;
        scanf("\n");
        getline(in, nv.diachi);
        in >> nv.mst >> nv.hopdong;
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien nv)
    {
        out << nv.mnv << " " << nv.hoten << " " << nv.gioitinh << " " << nv.ngaysinh << " " << nv.diachi << " " << nv.mst << " " << nv.hopdong << endl;
        return out;
    }
};

int NhanVien::cnt = 1;
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}