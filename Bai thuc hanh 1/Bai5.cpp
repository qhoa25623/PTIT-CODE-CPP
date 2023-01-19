#include <bits/stdc++.h>
using namespace std;

double diem(int l)
{
    double d1;
    if (l >= 3 && l <= 4)
    {
        d1 = 2.5;
    }
    else if (l >= 5 && l <= 6)
    {
        d1 = 3.0;
    }
    else if (l >= 7 && l <= 9)
    {
        d1 = 3.5;
    }
    else if (l >= 10 && l <= 12)
    {
        d1 = 4.0;
    }
    else if (l >= 13 && l <= 15)
    {
        d1 = 4.5;
    }
    else if (l >= 16 && l <= 19)
    {
        d1 = 5.0;
    }
    else if (l >= 20 && l <= 22)
    {
        d1 = 5.5;
    }
    else if (l >= 23 && l <= 26)
    {
        d1 = 6.0;
    }
    else if (l >= 27 && l <= 29)
    {
        d1 = 6.5;
    }
    else if (l >= 30 && l <= 32)
    {
        d1 = 7.0;
    }
    else if (l >= 33 && l <= 34)
    {
        d1 = 7.5;
    }
    else if (l >= 35 && l <= 36)
    {
        d1 = 8.0;
    }
    else if (l >= 37 && l <= 38)
    {
        d1 = 8.5;
    }
    else if (l >= 39 && l <= 40)
    {
        d1 = 9.0;
    }
    return d1;
}
double cres(double x)
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
        double res = 0;
        cin >> r >> l;
        cin >> s >> w;
        res = (double)(diem(r) + diem(l) + s + w) / 4.0;
        int ng = (int)res;
        double tp = res - (double)ng;
        double ans = (double)ng + cres(tp);
        cout << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}