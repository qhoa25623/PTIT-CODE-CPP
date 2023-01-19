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
    string getNganh()
    {
        return this->nganh;
    }
    friend ostream &operator<<(ostream &out, GiangVien gv)
    {
        out << gv.mgv << " " << gv.hoten << " " << gv.nganh << endl;
        return out;
    }
};

int GiangVien::cnt = 1;

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
    int tv;
    cin >> tv;
    scanf("\n");
    while (tv--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        string res = "";
        while (ss >> tmp)
        {
            res += toupper(tmp[0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (gv[i].getNganh() == res)
            {
                cout << gv[i];
            }
        }
    }
    return 0;
}