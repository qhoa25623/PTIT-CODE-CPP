#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string msv, hoten, lop, email;

public:
    friend istream &operator>>(istream &in, SinhVien &sv)
    {
        scanf("\n");
        getline(in, sv.msv);
        getline(in, sv.hoten);
        in >> sv.lop >> sv.email;
        return in;
    }
    string getLop()
    {
        return this->lop;
    }
    friend ostream &operator<<(ostream &out, SinhVien sv)
    {
        out << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.email << endl;
        return out;
    }
};
int main()
{
    int n;
    cin >> n;
    SinhVien sv[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sv[i];
    }
    int tv;
    cin >> tv;
    while (tv--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (sv[i].getLop() == s)
            {
                cout << sv[i];
            }
        }
    }
    return 0;
}