#include <bits/stdc++.h>
using namespace std;

struct people
{
    string name, birthday;
    void nhap()
    {
        cin >> name >> birthday;
    }
    void in()
    {
        cout << name << endl;
    }
};

string Chuanhoa(people a)
{
    for (int i = 0; i < a.birthday.size(); i++)
    {
        if (!isdigit(a.birthday[i]))
        {
            a.birthday[i] = ' ';
        }
    }
    stringstream ss(a.birthday);
    string tmp;
    string dob = "";
    while (ss >> tmp)
    {
        dob = tmp + dob;
    }
    // a.birthday = dob;
    return dob;
}
bool cmp(people a, people b)
{
    return Chuanhoa(a) > Chuanhoa(b);
}
int main()
{
    int n;
    cin >> n;
    vector<people> v;
    while (n--)
    {
        people a;
        a.nhap();
        v.push_back(a);
    }
    sort(v.begin(), v.end(), cmp);
    v[0].in();
    v[v.size() - 1].in();
    return 0;
}