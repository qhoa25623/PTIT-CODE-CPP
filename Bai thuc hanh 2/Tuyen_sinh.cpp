#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string hoten, ma;
    double toan, ly, hoa;
};

void in(ThiSinh ts)
{
    double res;
    string tmp = ts.ma.substr(2, 1);
    if (tmp == "1")
    {
        res = 0.5;
    }
    else if (tmp == "2")
    {
        res = 1.0;
    }
    else
    {
        res = 2.5;
    }
    int uutien = (int)res;
    if (res == 1.0)
    {
        cout << ts.ma << " " << ts.hoten << " " << uutien << " ";
    }
    else
    {
        cout << ts.ma << " " << ts.hoten << " " << fixed << setprecision(1) << res << " ";
    }
    double tongdiem = ts.toan * 2 + ts.ly + ts.hoa;
    int diem = (int)tongdiem;
    if (diem * 1.0 == tongdiem)
    {
        cout << diem << " ";
    }
    else
    {
        cout << fixed << setprecision(1) << tongdiem << " ";
    }
    if (tongdiem + res < 24 * 1.0)
    {
        cout << "TRUOT";
    }
    else
    {
        cout << "TRUNG TUYEN";
    }
}
void nhap(ThiSinh &ts)
{
    getline(cin, ts.ma);
    getline(cin, ts.hoten);
    cin >> ts.toan >> ts.ly >> ts.hoa;
}
int main()
{
    ThiSinh ts;
    nhap(ts);
    in(ts);
    return 0;
}