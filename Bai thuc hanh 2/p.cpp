#include <bits/stdc++.h>
using namespace std;
struct Diem
{
    int ma;
    double cs, tt;
    friend istream &operator>>(istream &in, Diem &d)
    {
        in >> d.ma >> d.cs >> d.tt;
        return in;
    }
    friend ostream &operator<<(ostream &out, Diem d)
    {
        out << d.ma << " ";
        return out;
    }
};

double tinh(Diem d)
{
    double d1 = 0.7 * d.cs + 0.3 * d.tt;
    return d1;
}

bool cmp(Diem d1, Diem d2)
{
    if (tinh(d1) != tinh(d2))
        return tinh(d1) > tinh(d2);
    else
        return d1.ma < d2.ma;
}

bool cmp2(Diem d1, Diem d2)
{
    return d1.ma < d2.ma;
}
int main()
{
    int n;
    cin >> n;
    Diem moi[7];
    Diem d[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    stable_sort(d, d + n, cmp);

    for (int i = 0; i < 7; i++)
    {
        moi[i] = d[i];
    }
    sort(moi, moi + 7, cmp2);
    for (auto x : moi)
    {
        cout << x;
    }
    return 0;
}