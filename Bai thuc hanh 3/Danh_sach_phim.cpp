#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Phim
{
    string ma, ten, tl, ngay;
    int tap;
    friend ostream &operator<<(ostream &out, Phim &p)
    {
        out << p.ma << " " << p.tl << " " << p.ngay << " " << p.tap;
        return out;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    cin.ignore();
    string tloai[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, tloai[i]);
    }
    Phim p[m];
    for(int i=0;i<m;i++){
        
    }
    return 0;
}