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
    string tuoi()
    {
        string res = "";
        stringstream ss(ngaysinh);
        string tmp;
        vector<string> v;
        while (getline(ss, tmp, '/'))
        {
            v.push_back(tmp);
        }
        res += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++)
        {
            res += v[i];
        }
        return res;
    }
    friend ostream &operator<<(ostream &out, NhanVien nv)
    {
        out << nv.mnv << " " << nv.hoten << " " << nv.gioitinh << " " << nv.ngaysinh << " " << nv.diachi << " " << nv.mst << " " << nv.hopdong << endl;
        return out;
    }
};

int NhanVien::cnt = 1;

bool cmp(NhanVien a, NhanVien b)
{
    return a.tuoi() < b.tuoi();
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}