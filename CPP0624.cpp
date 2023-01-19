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
    string getNganh()
    {
        return this->msv.substr(5, 2);
    }
    string getE(){
        return this->lop.substr(0,1);
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
    scanf("\n");
    while (tv--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        stringstream ss(s);
        string tmp;
        string res = "";
        while (ss >> tmp)
        {
            res += toupper(tmp[0]);
        }
        string temp="";
        if(res=="CNTT" || res=="ATTT"){
            temp="E";
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (sv[i].getNganh() == res.substr(0, 2) && sv[i].getE()!=temp)
            {
                cout << sv[i];
            }
        }
    }
    return 0;
}