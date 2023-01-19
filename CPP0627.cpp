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
    string getHT()
    {
        return this->hoten;
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
        string tmp = s;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        string res = "";
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tmp << ":\n";
        for (int i = 0; i < n; i++)
        {
            string res = "";
            for (int j = 0; j < gv[i].getHT().size(); j++)
            {
                res += tolower(gv[i].getHT()[j]);
            }
            if (res.find(s)!=string::npos)
            {
                cout << gv[i];
            }
        }
    }
    return 0;
}