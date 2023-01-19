#include <bits/stdc++.h>
using namespace std;

void chuanhoa1(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
        s[i] = tolower(s[i]);
}
void chuanhoa2(string &s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
}

string a[1000001];

int main()
{
    string tmp;
    int dem = 0;
    int c = 0;
    while (cin >> tmp)
    {
        int check = 0;
        if (c == 0)
            chuanhoa1(tmp);
        else
            chuanhoa2(tmp);
        if (tmp[tmp.size() - 1] == '.')
        {
            int b = tmp.find('.');
            tmp.erase(b, '.');
            check++;
        }
        else if (tmp[tmp.size() - 1] == '?')
        {
            int b = tmp.find('?');
            tmp.erase(b, '?');
            check++;
        }
        else if (tmp[tmp.size() - 1] == '!')
        {
            int b = tmp.find('!');
            tmp.erase(b, '!');
            check++;
        }
        a[dem] += tmp + " ";
        c++;
        if (check != 0)
        {
            dem++;
            c = 0;
        }
    }
    for (int i = 0; i < dem; i++)
    {
        cout << a[i] << endl;
    }
}