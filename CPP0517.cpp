#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string id;
    string name, sex, birthday, address, code, contract;
};

void nhap(NhanVien &a)
{
    cin.ignore();
    getline(cin, a.name);
    cin >> a.sex >> a.birthday;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.code >> a.contract;
}

void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string s = to_string(i + 1);
        while (s.size() < 5)
        {
            s = "0" + s;
        }
        cout << s << " ";
        cout << ds[i].name << " " << ds[i].sex << " " << ds[i].birthday << " " << ds[i].address << " " << ds[i].code << " " << ds[i].contract << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}