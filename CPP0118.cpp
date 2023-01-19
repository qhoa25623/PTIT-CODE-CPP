#include <bits/stdc++.h>
using namespace std;

bool check_sphenic(int n)
{
    int tmp = n;
    int sphenic = 1;
    int cnt1 = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                if (cnt == 2)
                {
                    return false;
                }
                n /= i;
            }
            sphenic *= i;
            cnt1++;
        }
    }
    if (n != 1)
    {
        cnt1++;
        sphenic *= n;
    }
    return sphenic == tmp && cnt1 == 3;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check_sphenic(n))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}