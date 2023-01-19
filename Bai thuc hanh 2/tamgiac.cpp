#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        double res = (double)1 / (double)4 * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
        cout << fixed << setprecision(2) << res << endl;
    }
    return 0;
}