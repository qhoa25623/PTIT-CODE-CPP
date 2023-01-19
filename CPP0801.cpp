#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in;
    in.open("PTIT.in");
    ofstream out;
    out.open("PTIT.out", ios::trunc);
    if (in.is_open())
    {
        string s;
        while (getline(in, s))
        {
            out << s << endl;
        }
    }
    in.close();
    out.close();
    return 0;
}