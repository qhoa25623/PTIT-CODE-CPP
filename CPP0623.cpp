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
    string getKhoa()
    {
        return this->lop.substr(1,2);
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
        cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (sv[i].getKhoa() == s.substr(2,2))
            {
                cout << sv[i];
            }
        }
    }
    return 0;
}