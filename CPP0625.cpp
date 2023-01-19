#include <bits/stdc++.h>
using namespace std;

class GiangVien
{
private:
    static int cnt;
    string mgv, hoten, nganh;

public:
    friend istream &operator>>(istream &in, GiangVien &gv)
    {
        gv.mgv = "GV" + string(2 - to_string(gv.cnt).length(), '0') + to_string(gv.cnt);
        gv.cnt++;
        getline(in, gv.hoten);
        getline(in, gv.nganh);
        stringstream ss(gv.nganh);
        string tmp;
        string res = "";
        while (ss >> tmp)
        {
            res += toupper(tmp[0]);
        }
        gv.nganh = res;
        return in;
    }
    string getTen()
    {
        stringstream ss(hoten);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        return v[v.size() - 1];
    }
    string getMa()
    {
        return this->mgv;
    }
    friend ostream &operator<<(ostream &out, GiangVien gv)
    {
        out << gv.mgv << " " << gv.hoten << " " << gv.nganh << endl;
        return out;
    }
};

int GiangVien::cnt = 1;

bool cmp(GiangVien a, GiangVien b)
{
    if (a.getTen() != b.getTen())
        return a.getTen() < b.getTen();
    else
        return a.getMa() < b.getMa();
}
int main()
{
    int n;
    cin >> n;
    scanf("\n");
    GiangVien gv[n];
    for (auto &x : gv)
    {
        cin >> x;
    }
    sort(gv, gv + n, cmp);
    for (auto x : gv)
    {
        cout << x;
    }
    return 0;
}