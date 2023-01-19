#include <bits/stdc++.h>
using namespace std;

int Ptich(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return 2;
    }
    else
    {
        for (int i = 3; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return i;
                while (n % i == 0)
                {
                    n /= i;
                }
            }
        }
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << Ptich(i) << " ";
        }
        cout << endl;
    }
    return 0;
}