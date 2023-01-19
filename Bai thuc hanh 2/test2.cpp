#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class xaukytu
{
private:
    string xkt;

public:
    xaukytu()
    {
    }
    xaukytu xau(ll num)
    {
        string tmp = to_string(num);
        this->xkt = num;
    }
    xaukytu(char *dskytu)
    {
        this->xkt = dskytu;
    }
    void xemmh()
    {
        cout << xkt;
    }
    void nhapbp()
    {
        string x;
        cin >> x;
        this->xkt = x;
    }
    bool operator<=(xaukytu khac)
    {
        return xkt <= khac.xkt;
    }
};

int main()
{
    xaukytu a, b("1234"), c;
    a.nhapbp();
    cout << "\n a=";
    a.xemmh();
    cout << "\n (int)b=" << (int)b;
    c = xau(1334);
    cout << "\n c=";
    c.xemmh();
    if (b <= c)
    {
        cout << "\n b<=c";
    }
    else
    {
        cout << "\n b>c";
    }
    a = b + c;
    cout << "\n a=";
    cout << a.xemmh();
    return 0;
}