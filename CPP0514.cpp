#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string hoten, lop, ngaysinh;
    double gpa;
    string masv = "B20DCCN";
};

void nhap(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ds[i].hoten);
        cin >> ds[i].lop >> ds[i].ngaysinh >> ds[i].gpa;
    }
}

void Chuanhoa(string &a)
{
    a[0] = toupper(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
}
string ChuanhoaTen(SinhVien &a)
{
    stringstream ss(a.hoten);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    string name;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
        {
            Chuanhoa(v[i]);
            name += v[i];
        }
        else
        {
            Chuanhoa(v[i]);
            name += v[i] + " ";
        }
    }
    return name;
}

void Chuanhoangaysinh(SinhVien &a)
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
void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string tmp = to_string(i + 1);
        while (tmp.size() < 3)
        {
            tmp = "0" + tmp;
        }
        ds[i].masv += tmp;
        Chuanhoangaysinh(ds[i]);
        cout << ds[i].masv << " " << ChuanhoaTen(ds[i]) << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
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