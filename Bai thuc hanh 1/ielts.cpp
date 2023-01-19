#include <bits/stdc++.h>
using namespace std;

double diem(int p)
{
    double d1;
    if (p >= 3 && p <= 4)
    {
        d1 = 2.5;
    }
    else if (p >= 5 && p <= 6)
    {
        d1 = 3.0;
    }
    else if (p >= 7 && p <= 9)
    {
        d1 = 3.5;
    }
    else if (p >= 10 && p <= 12)
    {
        d1 = 4.0;
    }
    else if (p >= 13 && p <= 15)
    {
        d1 = 4.5;
    }
    else if (p >= 16 && p <= 19)
    {
        d1 = 5.0;
    }
    else if (p >= 20 && p <= 22)
    {
        d1 = 5.5;
    }
    else if (p >= 23 && p <= 26)
    {
        d1 = 6.0;
    }
    else if (p >= 27 && p <= 29)
    {
        d1 = 6.5;
    }
    else if (p >= 30 && p <= 32)
    {
        d1 = 7.0;
    }
    else if (p >= 33 && p <= 34)
    {
        d1 = 7.5;
    }
    else if (p >= 35 && p <= 36)
    {
        d1 = 8.0;
    }
    else if (p >= 37 && p <= 38)
    {
        d1 = 8.5;
    }
    else if (p >= 39 && p <= 40)
    {
        d1 = 9.0;
    }
    return d1;
}
double lamtron(double x)
{
    if (x == 0.25 || x == 0.375 || x == 0.625)
    {
        x = 0.5;
    }
    else if (x == 0.75 || x == 0.875)
    {
        x = 1.0;
    }
    else if (x == 0.125)
    {
        x = 0.0;
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r, l;
        double s, w;
        double diemtong = 0;
        cin >> r >> l;
        cin >> s >> w;
        diemtong = (diem(r) + diem(l) + s + w) / 4.0;
        int nguyen = diemtong;
        double tp = diemtong - 1.0 * nguyen;
        double ans = 1.0 * nguyen + lamtron(tp);
        cout << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}