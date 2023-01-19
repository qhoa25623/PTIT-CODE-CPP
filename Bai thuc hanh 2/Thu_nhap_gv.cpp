#include <bits/stdc++.h>
using namespace std;

class GiaoVien
{
private:
    string mangach, hoten;
    int luongcb, bacluong, phucap;

public:
    friend istream &operator>>(istream &in, GiaoVien &gv)
    {
        getline(in, gv.mangach);
        getline(in, gv.hoten);
        in >> gv.luongcb;
        return in;
    }
    string pc(string mangach)
    {
        return mangach.substr(0, 2);
    }
    void luong()
    {
        int thuong;
        string cv = pc(mangach);
        if (cv == "HT")
        {
            thuong = 2000000;
        }
        else if (cv == "HP")
        {
            thuong = 900000;
        }
        else
        {
            thuong = 500000;
        }
        luongcb = luongcb * stoi(mangach.substr(2, 2)) + thuong;
    }

    void in()
    {
        bacluong = stoi(mangach.substr(2, 2));
        string tmp = mangach.substr(0, 2);
        int tien;
        if (tmp == "HT")
        {
            tien = 2000000;
        }
        else if (tmp == "HP")
        {
            tien = 900000;
        }
        else
        {
            tien = 500000;
        }
        phucap = tien;
        luong();
        cout << mangach << " " << hoten << " " << bacluong << " " << phucap << " " << luongcb << endl;
    }
};
int main()
{
    GiaoVien gv;
    cin >> gv;
    gv.in();
    return 0;
}