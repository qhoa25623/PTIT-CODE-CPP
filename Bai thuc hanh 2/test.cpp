#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct MH
{
    string ma, ten;
    int tc;
    double cc, kt, dt;
    friend istream &operator>>(istream &in, MH &mh)
    {
        scanf("\n");
        getline(in, mh.ma);
        getline(in, mh.ten);
        in >> mh.tc >> mh.cc >> mh.kt >> mh.dt;
        return in;
    }
};

struct SV
{
    string msv, hoten, lop;
    vector<MH> v;
    friend istream &operator>>(istream &in, SV &sv)
    {
        getline(in, sv.msv);
        getline(in, sv.hoten);
        getline(in, sv.lop);
        return in;
    }

    friend ostream &operator<<(ostream &out, SV sv)
    {
        out << sv.msv << " " << sv.hoten << " " << sv.lop;
        return out;
    }
};

double diemtb(MH mh)
{
    double d = mh.cc * 0.1 + mh.kt * 0.2 + mh.dt * 0.7;
    return d;
}

int main()
{
    int n, m;
    cin >> n >> m;
    MH mh[n];
    SV sv[m];
    for (auto x : mh)
    {
        cin >> x;
    }
    scanf("\n");
    for (auto x : sv)
    {
        double tbc = 0;
        cin >> x;
        int k;
        cin >> k;
        scanf("\n");
        while (k--)
        {
            string mon;
            getline(cin, mon);
            for (auto y : mh)
            {
                if (y.ten == mon)
                {
                    x.v.push_back(y);
                    tbc += diemtb(y);
                }
            }
        }
        tbc /= k * 1.0;
        if (tbc >= 7.0)
            cout << x << " " << fixed << setprecision(2) << tbc << endl;
    }
    return 0;
}