#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x, y;
};
void input(Point &a)
{
    cin >> a.x >> a.y;
}
double distance(Point a, Point b)
{
    double res = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    return res;
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}