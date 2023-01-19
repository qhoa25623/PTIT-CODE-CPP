#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int d, m;
        cin >> d >> m;
        if (m == 1)
        {
            if (d >= 1 && d <= 19)
            {
                cout << "Ma Ket\n";
            }
            else
            {
                cout << "Bao Binh\n";
            }
        }
        else if (m == 2)
        {
            if (d >= 1 && d <= 18)
            {
                cout << "Bao Binh\n";
            }
            else
            {
                cout << "Song Ngu\n";
            }
        }
        else if (m == 3)
        {
            if (d >= 1 && d <= 20)
            {
                cout << "Song Ngu\n";
            }
            else
            {
                cout << "Bach Duong\n";
            }
        }
        else if (m == 4)
        {
            if (d >= 1 && d <= 19)
            {
                cout << "Bach Duong\n";
            }
            else
            {
                cout << "Kim Nguu\n";
            }
        }
        else if (m == 5)
        {
            if (d >= 1 && d <= 20)
            {
                cout << "Kim Nguu\n";
            }
            else
            {
                cout << "Song Tu\n";
            }
        }
        else if (m == 6)
        {
            if (d >= 1 && d <= 20)
            {
                cout << "Song Tu\n";
            }
            else
            {
                cout << "Cu Giai\n";
            }
        }
        else if (m == 7)
        {
            if (d >= 1 && d <= 22)
            {
                cout << "Cu Giai\n";
            }
            else
            {
                cout << "Su Tu\n";
            }
        }
        else if (m == 8)
        {
            if (d >= 1 && d <= 22)
            {
                cout << "Su Tu\n";
            }
            else
            {
                cout << "Xu Nu\n";
            }
        }
        else if (m == 9)
        {
            if (d >= 1 && d <= 22)
            {
                cout << "Xu Nu\n";
            }
            else
            {
                cout << "Thien Binh\n";
            }
        }
        else if (m == 10)
        {
            if (d >= 1 && d <= 22)
            {
                cout << "Thien Binh\n";
            }
            else
            {
                cout << "Thien Yet\n";
            }
        }
        else if (m == 11)
        {
            if (d >= 1 && d <= 22)
            {
                cout << "Thien Yet\n";
            }
            else
            {
                cout << "Nhan Ma\n";
            }
        }
        else
        {
            if (d >= 1 && d <= 21)
            {
                cout << "Nhan Ma\n";
            }
            else
            {
                cout << "Ma Ket\n";
            }
        }
    }
    return 0;
}