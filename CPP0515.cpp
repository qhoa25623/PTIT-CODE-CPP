#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string hoten, lop, ngaysinh;
    double gpa;
    string masv = "B20DCCN";
};

vector<SinhVien> v;

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

string Chuanhoangaysinh(SinhVien &a)
{
    if (a.ngaysinh[1] == '/')
    {
        a.ngaysinh = "0" + a.ngaysinh;
    }
    if (a.ngaysinh[4] == '/')
    {
        a.ngaysinh.insert(3, "0");
    }
    return a.ngaysinh;
}
void inkq(SinhVien a)
{
    cout << a.masv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string tmp = to_string(i + 1);
        while (tmp.size() < 3)
        {
            tmp = "0" + tmp;
        }
        ds[i].masv += tmp;
        ds[i].ngaysinh=Chuanhoangaysinh(ds[i]);
        ds[i].hoten = ChuanhoaTen(ds[i]);
        v.push_back(ds[i]);
    }
}
void in(SinhVien ds[], int n)
{
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        inkq(x);
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}