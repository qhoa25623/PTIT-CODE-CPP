#include <bits/stdc++.h>
using namespace std;

char dapande101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char dapande102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        vector<char> dapan;
        for (int i = 0; i < 15; i++)
        {
            char s;
            cin >> s;
            dapan.push_back(s);
        }
        double diem = 0;
        if (s == 101)
        {
            for (int d = 0; d < 15; d++)
            {
                if (dapan[d] == dapande101[d])
                {
                    diem += (double)10 / 15;
                }
            }
        }
        else
        {
            for (int d = 0; d < 15; d++)
            {
                if (dapan[d] == dapande102[d])
                {
                    diem += (double)10 / 15;
                }
            }
        }
        cout << setprecision(2) << fixed << diem << endl;
    }
    return 0;
}