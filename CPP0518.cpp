#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    static int cnt;
    string id, name, sex, birthdate, address, code, contract;
    void in()
    {
        cout << id << " " << name << " " << sex << " " << birthdate << " " << address << " " << code << " " << contract << endl;
    }
    string tuoi()
    {
        stringstream ss(birthdate);
        string tmp;
        string day = "";
        vector<string> v;
        while (getline(ss, tmp, '/'))
        {
            v.push_back(tmp);
        }
        day += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++)
        {
            day += v[i];
        }
        return day;
    }
};

void nhap(NhanVien &x)
{
    scanf("\n");
    x.id = string(5 - to_string(x.cnt).length(), '0') + to_string(x.cnt);
    x.cnt++;
    getline(cin, x.name);
    cin >> x.sex >> x.birthdate;
    scanf("\n");
    getline(cin, x.address);
    cin >> x.code >> x.contract;
}

bool cmp(NhanVien a, NhanVien b)
{
    return a.tuoi() < b.tuoi();
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ds[i].in();
    }
}
int NhanVien::cnt = 1;

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}