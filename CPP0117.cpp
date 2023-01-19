#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (n > 9)
        {
            n = sum(n);
        }
        cout << n << endl;
    }
    return 0;
}