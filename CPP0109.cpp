#include <bits/stdc++.h>
using namespace std;

bool EvenOdd(int n)
{
    int even = 0, odd = 0;
    while (n)
    {
        int i = n % 10;
        if (i % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    return even == odd;
}
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (EvenOdd(i))
        {
            cout << i << " ";
            cnt++;
        }
        if (cnt == 10)
        {
            cout << endl;
            cnt = 0;
        }
    }
    return 0;
}