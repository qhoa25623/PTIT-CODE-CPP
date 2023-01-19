#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string msv, ten, lop, email;
    friend istream &operator>>(istream &in, SinhVien &sv)
    {
        scanf("\n");
        getline(in, sv.msv);
        getline(in, sv.ten);
        in >> sv.lop >> sv.email;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien sv)
    {
        out << sv.msv << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    if (a.lop != b.lop)
        return a.lop < b.lop;
    else
        return a.msv < b.msv;
}
int main()
{
    int n;
    cin>>n;
    SinhVien sv[n];
    for(auto &x:sv){
        cin>>x;
    }
    sort(sv, sv+n, cmp);
    for(auto x:sv){
        cout<<x;
    }
    return 0;
}